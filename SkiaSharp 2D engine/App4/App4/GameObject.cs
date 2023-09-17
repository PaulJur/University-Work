using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using SkiaSharp.Views.Windows;
using SkiaSharp;

namespace App4
{
    class GameObject
    {
        SKMatrix orgin;
        SKMatrix positionMatrix;
        float scale = 1;

        bool hasChild;
        bool isChild;

        


        //animations
        static SpriteSheet spriteSheet;
        public Dictionary<string, Animation> animations = new Dictionary<string, Animation>();


        public GameObject(float x, float y) //setting up position matrix
        {
            setPositionMatrix(x,y);
        }
        //Postion + transformation
        public void setPositionMatrix(float x, float y)
        {
            positionMatrix = new SKMatrix(scale, 0, x, 0, scale, y, 0, 0, 1);
            orgin = positionMatrix;

        }
        public void addPosition(float x, float y)
        {
            positionMatrix.TransX += x;
            positionMatrix.TransY += y;

            orgin.TransX = positionMatrix.TransX;
            orgin.TransY = positionMatrix.TransY;
        }
        public SKPoint getPosition()
        {
            return new SKPoint(positionMatrix.TransX,positionMatrix.TransY);
        }
        public SKMatrix getOrgin()
        {
            return orgin;
        }
        public void rotate(double degrees, SKPoint point) //point - where to rotate about
        {
            double radian = Math.PI * degrees / 180.0;

            //[ScaleX, SkewX, TransX, SkewY, ScaleY,TransY, Persp0, Persp1, Persp2]

            //Where to rotate about - works
            List<float> targetMatrix3x3 = new List<float> { point.X, point.Y, 1 }; 

            //Rotation matrix - works
            SKMatrix rotationMatrix = new SKMatrix((float)Math.Cos(radian), -(float)Math.Sin(radian), 0,
                                                   (float)Math.Sin(radian), (float)Math.Cos(radian), 0,
                                                    0, 0, 1); 

            SKMatrix transformMatrix = new SKMatrix(1,0,10,
                                                    0,1,10,
                                                    0,0,1);

            SKMatrix NegativeTransMatrix = new SKMatrix(1, 0, -positionMatrix.TransX,
                                                        0, 1, -positionMatrix.TransY,
                                                        0, 0, 1);



            targetMatrix3x3 = new List<float> { NegativeTransMatrix.ScaleX * targetMatrix3x3[0] + NegativeTransMatrix.SkewX * targetMatrix3x3[1] + NegativeTransMatrix.TransX * targetMatrix3x3[2],
                                                NegativeTransMatrix.SkewY * targetMatrix3x3[0] + NegativeTransMatrix.ScaleY * targetMatrix3x3[1] + NegativeTransMatrix.TransY * targetMatrix3x3[2],
                                                NegativeTransMatrix.Persp0 * targetMatrix3x3[0] + NegativeTransMatrix.Persp1 * targetMatrix3x3[1] + NegativeTransMatrix.Persp2 * targetMatrix3x3[2]};
            //Console.WriteLine("matrix numbers: "+targetMatrix3x3[0] +" " + targetMatrix3x3[1] + " " + targetMatrix3x3[2] + " ");

            targetMatrix3x3 = new List<float> { rotationMatrix.ScaleX * targetMatrix3x3[0] + rotationMatrix.SkewX * targetMatrix3x3[1] + rotationMatrix.TransX * targetMatrix3x3[2],
                                                rotationMatrix.SkewY * targetMatrix3x3[0] + rotationMatrix.ScaleY * targetMatrix3x3[1] + rotationMatrix.TransY * targetMatrix3x3[2],
                                                rotationMatrix.Persp0 * targetMatrix3x3[0] + rotationMatrix.Persp1 * targetMatrix3x3[1] + rotationMatrix.Persp2 * targetMatrix3x3[2]};
            //Console.WriteLine("matrix numbers: "+targetMatrix3x3[0] +" " + targetMatrix3x3[1] + " " + targetMatrix3x3[2] + " ");

            targetMatrix3x3 = new List<float> { transformMatrix.ScaleX * targetMatrix3x3[0] + transformMatrix.SkewX * targetMatrix3x3[1] + transformMatrix.TransX * targetMatrix3x3[2],
                                                transformMatrix.SkewY * targetMatrix3x3[0] + transformMatrix.ScaleY * targetMatrix3x3[1] + transformMatrix.TransY * targetMatrix3x3[2],
                                                transformMatrix.Persp0 * targetMatrix3x3[0] + transformMatrix.Persp1 * targetMatrix3x3[1] + transformMatrix.Persp2 * targetMatrix3x3[2]};

            Console.WriteLine("matrix numbers: "+targetMatrix3x3[0] +" " + targetMatrix3x3[1] + " " + targetMatrix3x3[2] + " ");
            
            
            positionMatrix.TransX = targetMatrix3x3[0];
            positionMatrix.TransY = targetMatrix3x3[1];
            positionMatrix.Persp2 = targetMatrix3x3[2];
            
            positionMatrix = SKMatrix.Concat(rotationMatrix, positionMatrix); //works at cords 0,0*/
        }
        public SKMatrix getPositionMatrix()
        {
            return positionMatrix;
        }

        //Animation
        public void setSpriteSheet(string path, int vertical, int horizontal)
        {
            spriteSheet = new SpriteSheet(path, vertical, horizontal);
        }


        public void setAnimation(int row, List<int> col, string name)
        {
            if (spriteSheet != null)
            {
                animations.Add(name, new Animation(spriteSheet, row, col));
            }
        }

        public SKImage playAnimation(string name)
        {
            return animations[name].play();
        }
        public SKRectI getHitbox()
        {
            SKRectI I = spriteSheet.getRectI();
            //Console.WriteLine("--------");

            //Console.WriteLine("Top pre:" + I.Top);
            I.Top = (int)(positionMatrix.TransY);
            //Console.WriteLine("Top post:" + I.Top);

            //Console.WriteLine("Left pre:" + I.Left);
            I.Left = (int)(positionMatrix.TransX);
            //Console.WriteLine("Left post:" + I.Left);

            //Console.WriteLine("Right pre:"+I.Right);
            I.Right = I.Right + (int)(positionMatrix.TransX);
            //Console.WriteLine("Right post:"+I.Right);

            //Console.WriteLine("Bottom pre:" + I.Bottom);
            I.Bottom = I.Bottom + (int)(positionMatrix.TransY);
            //Console.WriteLine("Bottom post:" + I.Bottom);

            return I;
        }
    }
}
