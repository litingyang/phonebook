reset
set ylabel 'time(sec)'
set style fill solid
set title 'perfomance comparison'
set term png enhanced font 'Verdana,10'
set output 'runtime.png'

plot [:][:0.12]'output.txt' using 2:xtic(1) with histogram title 'original', \
'' using ($0-0.08):($2+0.008):2 with labels title ' ', \
'' using 3:xtic(1) with histogram title 'optimized'  , \
'' using ($0+0.06):($3+0.006):3 with labels title ' ', \
'' using 4:xtic(1) with histogram title 'hash'  , \
'' using ($0+0.2):($4+0.002):4 with labels title ' ',\
'' using 5:xtic(1) with histogram title 'trie'  , \
'' using ($0+0.4):($5+0.004):5 with labels title ' '