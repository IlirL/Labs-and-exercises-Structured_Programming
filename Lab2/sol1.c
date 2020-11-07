#include<stdio.h>
#include<math.h>
double dist(float coordX, float coordY)
{
    return sqrt(pow(coordX, 2) + pow(coordY, 2));
}

int main()
{
    float coordx;
    float coordy;
    float radius;
    int quadrant[5] = {0,0,0,0,0};
    scanf("%f %f %f", &coordx, &coordy, &radius);
    //printf("%f,  %f\n", coordx, coordy);
    //check if the origin is inside cirlce then cout 1111
    if(dist(coordx, coordy) < radius)
    {
        printf("1111");
        return 0;
    }
    if(coordx == 0)
    {
        //found in y axis;
       // printf("We are in y axis\n");
        if(coordy>0)
        {
            quadrant[1] = 1;
            quadrant[2] = 1;
        }
        else
        {
            quadrant[3] = 1;
            quadrant[4] = 1;
        }

    }
    else if(coordy ==0)
    {
        //printf("We are in x axis\n");
        if(coordx<0)
        {
            quadrant[2] = 1;
            quadrant[3] = 1;

        }

        else if(coordx > 0)
        {
            quadrant[1] = 1;
            quadrant[4] = 1;
        }
    }

    else
    {
        //center  somewhere inside a quadrant
        if(coordx > 0 && coordy > 0)
        {
            //center in quadrant1
            //printf("quadrant1");
            quadrant[1] = 1;
            if(coordy < radius)
            quadrant[4] = 1;
            if(coordx <radius)
            quadrant[2] = 1;
        }
        else if(coordx > 0 && coordy<0)
        {
            //center if quadrant 4
           // printf("quadrant4");
            quadrant[4] = 1;
            if(coordy*(-1) < radius)
            quadrant[1] = 1;
            if(coordx < radius)
                quadrant[3] = 1;
        }
        else if(coordx<0 && coordy>0)
        //center quadrant 2
        {
            //printf("quadrant 2");
            quadrant[2] = 1;
            if(coordx * (-1) < radius)
                quadrant[1] = 1;
            if(coordy<radius)
            quadrant[3] = 1;
        }

        else
        {
          //  printf("quadrant 3\n");
            //printf("coordx = %f , coordy =  %f\n", coordx, coordy);
            quadrant[3] = 1;
            if(coordx*(-1) < radius)
            quadrant[4] = 1;
            if(coordy*(-1) < radius)
            quadrant[2] = 1;
        }

    }

    printf("%d%d%d%d", quadrant[1], quadrant[2],quadrant[3], quadrant[4]);

}
