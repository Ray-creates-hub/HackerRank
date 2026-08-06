int countingValleys(int steps, string path)
{
    int altitude = 0;
    int valleys = 0;

    for(char step : path)
    {
        if(step == 'U')
        {
            altitude++;

            if(altitude == 0)
                valleys++;
        }
        else
        {
            altitude--;
        }
    }

    return valleys;
}
