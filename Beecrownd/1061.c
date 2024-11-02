#include <stdio.h>

int main(){
    int m_i, d_i, h_i, s_i, m_f, h_f, d_f, s_f;
    int m_t, d_t, h_t, s_t;

    char dia[4], d;

    scanf("%s %d", &dia, &d_i);
    scanf("%d %c %d %c %d", &h_i, &d, &m_i, &d, &s_i);
    scanf("%s %d", &dia, &d_f);
    scanf("%d %c %d %c %d", &h_f, &d, &m_f, &d, &s_f);
    
    s_t = s_f - s_i;
    m_t = m_f - m_i;
    h_t = h_f - h_i;
    d_t = d_f - d_i;

    if(s_t < 0)
    {
        s_t += 60;
        m_t -= 1;
    }
    if(m_t < 0)
    {
        m_t += 60;
        h_t -= 1;
    }
    if(h_t < 0)
    {
        h_t += 24;
        d_t -= 1;
    }
    printf("%d dia(s)\n",d_t);
    printf("%d hora(s)\n",h_t);
    printf("%d minuto(s)\n",m_t);
    printf("%d segundo(s)\n",s_t);
    
    return 0;
}
