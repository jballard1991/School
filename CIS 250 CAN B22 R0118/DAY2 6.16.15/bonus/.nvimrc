version 6.0
vmap [% [%m'gv``
vmap ]% ]%m'gv``
vmap a% [%v]%
let s:cpo_save=&cpo
set cpo&vim
nmap gx <Plug>NetrwBrowseX
nnoremap <silent> <Plug>NetrwBrowseX :call netrw#NetrwBrowseX(expand("<cfile>"),0)
let &cpo=s:cpo_save
unlet s:cpo_save
set fileencodings=ucs-bom,utf-8,default,latin1
set helplang=en
set pastetoggle=<F37>
set window=49
" vim: set ft=vim :
