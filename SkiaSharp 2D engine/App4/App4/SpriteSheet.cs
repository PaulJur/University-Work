using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using SkiaSharp.Views.Windows;
using SkiaSharp;

namespace App4
{
    public class SpriteSheet
    {
        SKImage img;
        int gridSizeX, gridSizeY;
        public SpriteSheet(string path, int vertical,int horizontal)
        {
            img = SKImage.FromEncodedData(AppDomain.CurrentDomain.BaseDirectory + path);
            gridSizeX = img.Width / horizontal; //pixel size of 1 sprite calc
            gridSizeY = img.Height / vertical; //pixel size of 1 sprite calc
        }

        public SKImage getCutout(int YSpritePoint, int XSpritePoint)
        {
            SKRectI bounds = new SKRectI(YSpritePoint * gridSizeX, XSpritePoint * gridSizeY, (YSpritePoint + 1) * gridSizeX, (XSpritePoint + 1) * gridSizeY);
            SKImage cutout = img.Subset(bounds); //If fails check dependacies - .csproj file make sure path is there :)

            return cutout;
        }

        public SKImage getSKImage()
        {
            return img;
        }
        public SKRectI getRectI()
        {
            return new SKRectI(0, 0, gridSizeX, gridSizeY);
        }
        public SKPoint getSize()
        {
            return new SKPoint(gridSizeX, gridSizeY);
        }
    }
}