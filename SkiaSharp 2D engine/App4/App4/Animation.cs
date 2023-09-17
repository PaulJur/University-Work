using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using SkiaSharp.Views.Windows;
using SkiaSharp;

namespace App4
{
    //https://www.delftstack.com/howto/csharp/pass-function-as-parameter-inside-another-function-in-csharp/
    public class Animation
    {
        SpriteSheet sheet;
        int row1;
        List<int> cols;
        int frame;

        public Animation(SpriteSheet mySpriteSheet,int row, List<int> col)
        {
            row1 = row;
            cols = col;
            sheet = mySpriteSheet;
        }
        public SKImage play()
        {
            return sheet.getCutout(cols[frame] - 1, row1 - 1);
        }
        public void framePlus()
        {
            frame = frame % (cols.Count-1);
            frame++;
        }
    }
}
