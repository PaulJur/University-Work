using Microsoft.UI.Xaml;
using Microsoft.UI.Xaml.Controls;
using Microsoft.UI.Xaml.Controls.Primitives;
using Microsoft.UI.Xaml.Data;
using Microsoft.UI.Xaml.Input;
using Microsoft.UI.Xaml.Media;
using Microsoft.UI.Xaml.Navigation;
using System;
using System.Diagnostics;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Windows.Foundation;
using Windows.Foundation.Collections;
using SkiaSharp.Views.Windows;
using SkiaSharp;
using System.Runtime.InteropServices;


// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace App4
{
    /// <summary>
    /// An empty window that can be used on its own or navigated to within a Frame.
    /// </summary>
    public sealed partial class MainWindow : Window
    {
        [DllImport("kernel32.dll")]
        private static extern bool AllocConsole();  

        SKCanvas myCanvas;
        
        //Framerate
        Stopwatch stopwatch = new Stopwatch();
        bool pageIsActive;

        //Gameobjects
        static GameObject consumable = new GameObject(50,50);
        static GameObject mainChar = new GameObject(5,5);

        //animations
        static List<int> oneToFour = new List<int>() { 1, 2, 3, 4 }; 
        string current_animation = "";

        //transformation test
        float[] testValue = new float [9];


        public MainWindow()
        {
            this.InitializeComponent();
            setGameObjects();
            CompositionTarget.Rendering += render_update;
            spanel.KeyDown += keystroke;
            spanel.IsHitTestVisible = true;
            spanel.IsTabStop = true;
            AllocConsole();
            pageIsActive = true;
            stopwatch.Start();
        }
        private void setGameObjects()
        {
            //main char
            mainChar.setSpriteSheet("Assets\\char2.png", 4, 4);
            mainChar.setAnimation(1, oneToFour, "walk_down");
            mainChar.setAnimation(2, oneToFour, "walk_left");
            mainChar.setAnimation(3, oneToFour, "walk_right");
            mainChar.setAnimation(4, oneToFour, "walk_up");

            //consumable
            consumable.setSpriteSheet("Assets\\x1q.png", 20, 16);
            consumable.setAnimation(10, oneToFour, "cyclePot");
        }

        private void OnPaintSurface(object sender, SKPaintSurfaceEventArgs e)
        {
            myCanvas = e.Surface.Canvas;
            myCanvas.Clear(SKColors.HotPink);
            myCanvas.Translate(256,256);
            myCanvas.DrawCircle(0,0, 3, new SKPaint()); //canava x0,y0

            //timer
            myCanvas.DrawText(stopwatch.Elapsed.ToString(), 10, 10, new SKPaint());

            //random potion
            myCanvas.DrawImage(consumable.playAnimation("cyclePot"),consumable.getPosition());

            //
            //Player controller
            if (current_animation == "up")
            {
                myCanvas.DrawImage(mainChar.playAnimation("walk_up"), mainChar.getPosition());
            }
            else if (current_animation == "right")
            {
                myCanvas.DrawImage(mainChar.playAnimation("walk_right"), mainChar.getPosition());
            }
            else if (current_animation == "left")
            {
                myCanvas.DrawImage(mainChar.playAnimation("walk_left"), mainChar.getPosition());
            }
            else
            {
                myCanvas.DrawImage(mainChar.playAnimation("walk_down"), mainChar.getPosition()); //Rect method
            }

            //
            //testing colision
            //points
            //myCanvas.DrawCircle(new SKPoint(mainChar.getHitbox().Left, mainChar.getHitbox().Top), 3, new SKPaint());
            //myCanvas.DrawCircle(new SKPoint(mainChar.getHitbox().Right, mainChar.getHitbox().Bottom), 3, new SKPaint());
            //myCanvas.DrawCircle(new SKPoint(consumable.getHitbox().Left, consumable.getHitbox().Top), 3, new SKPaint());
            //myCanvas.DrawCircle(new SKPoint(consumable.getHitbox().Right, consumable.getHitbox().Bottom), 3, new SKPaint());

            //rectangles
            myCanvas.DrawRect(mainChar.getHitbox(),new SKPaint());
            myCanvas.DrawRect(consumable.getHitbox(), new SKPaint());

            //check if hitboxes overlap
            if (mainChar.getHitbox().IntersectsWith(consumable.getHitbox()))
            {
                Console.WriteLine("True");
            }

            //
            //testing rotation matrix
            /*
            try
            {
                mainChar.rotate(1, new SKPoint(20, 16));

                mainChar.getPositionMatrix().GetValues(testValue);
                foreach (float f in testValue)
                    Console.WriteLine(f);
                Console.WriteLine("main position:" + mainChar.getPosition());
                
            }
            catch
            {
                Console.WriteLine("error");
            }*/
            
        }
        void render_update(object a, object b)
        {
            canvas.Invalidate();
        }
            void keystroke(Object sender, KeyRoutedEventArgs e)
        {
            if (e.Key == Windows.System.VirtualKey.W)
            {
                mainChar.addPosition(0, -10);
                current_animation = "up";
                mainChar.animations["walk_up"].framePlus();
            }
            if (e.Key == Windows.System.VirtualKey.S)
            {
                mainChar.addPosition(0, 10);
                current_animation = "down";
                mainChar.animations["walk_down"].framePlus();
            }
            if (e.Key == Windows.System.VirtualKey.A)
            {
                mainChar.addPosition(-10, 0);
                current_animation = "left";
                mainChar.animations["walk_left"].framePlus();
            }
            if (e.Key == Windows.System.VirtualKey.D)
            {
                mainChar.addPosition(10,0);
                current_animation = "right";
                mainChar.animations["walk_right"].framePlus();
            }
        }
    }
}