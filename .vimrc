" 基础设置
set nocompatible " 关闭 vi 兼容模式
syntax on " 自动语法高亮
set number " 显示行号
set cursorline " 突出显示当前行
set shiftwidth=4 " 设定 << 和 >> 命令移动时的宽度为 4
set softtabstop=4 " 使得按退格键时可以一次删掉 4 个空格
set tabstop=4 " 设定 tab 长度为 4
set nobackup " 覆盖文件时不备份
set autochdir " 自动切换当前目录为当前文件所在的目录
filetype plugin indent on " 开启插件
set backupcopy=yes " 设置备份时的行为为覆盖
set ignorecase smartcase " 搜索时忽略大小写，但在有一个或以上大写字母时仍保持对大小写敏感
set nowrapscan " 禁止在搜索到文件两端时重新搜索
set incsearch " 输入搜索内容时就显示搜索结果
set hlsearch " 搜索时高亮显示被找到的文本
set noerrorbells " 关闭错误信息响铃
set novisualbell " 关闭使用可视响铃代替呼叫
" set showmatch " 插入括号时，短暂地跳转到匹配的对应括号
" set matchtime=2 " 短暂跳转到匹配括号的时间
set smartindent " 开启新行时使用智能自动缩进
" 不设定在插入状态无法用退格键和 Delete 键删除回车符
set backspace=indent,eol,start
set cmdheight=1 " 设定命令行的行数为 1
set laststatus=2 " 显示状态栏 (默认值为 1, 无法显示状态栏)
" 配置多语言环境
 if has("multi_byte")
" UTF-8 编码
set encoding=utf-8
set termencoding=utf-8
set formatoptions+=mM
set fencs=utf-8,gbk
set fileformat=unix

“ 主体颜色设置
" syntax enable
" set background=dark
" colorscheme solarized
" cp ~/.vim/bundle/vim-colors-solarized/colors/solarized.vim ~/.vim/colors/
set bg=dark                     "设置背景为黑色
colorscheme gruvbox             "设置主题为 gruvbox
set guioptions=                 "去掉两边的scrollbar
set guifont=Monaco:h20          "设置字体和字的大小






set nocompatible              " be iMproved, required
filetype off                  " required

" set the runtime path to include Vundle and initialize
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

let mapleader = ","
"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
"                          Vundle configuration                           "
"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" let Vundle manage Vundle, required
Plugin 'gmarik/Vundle.vim'
Plugin 'morhetz/gruvbox'
Plugin 'fatih/vim-go'
Plugin 'mileszs/ack.vim'
Plugin 'vim-airline/vim-airline'
Plugin 'vim-airline/vim-airline-themes'
Plugin 'scrooloose/nerdcommenter'
Plugin 'jiangmiao/auto-pairs'
Plugin 'wsdjeg/vim-cheat'
Plugin 'terryma/vim-expand-region'
Plugin 'terryma/vim-multiple-cursors'
Plugin 'terryma/vim-smooth-scroll'
Plugin 'tpope/vim-surround'
Plugin 'easymotion/vim-easymotion'
Plugin 'junegunn/goyo.vim'
Plugin 'junegunn/limelight.vim'
Plugin 'ctrlpvim/ctrlp.vim'
Plugin 'majutsushi/tagbar'
Plugin 't9md/vim-choosewin'
Plugin 'scrooloose/nerdtree'
Plugin 'fholgado/minibufexpl.vim'
Plugin 'kien/tabman.vim'
Plugin 'w0rp/ale'
Plugin 'Valloric/YouCompleteMe'
Plugin 'skywind3000/asyncrun.vim'
Plugin 'skywind3000/quickmenu.vim'
" All of your Plugins must be added before the following line
call vundle#end()            " required
filetype plugin indent on    " required







" --------'fatih/vim-go'--------
” go语言支持插件
" vim-go custom mappings
au FileType go nmap <Leader>s <Plug>(go-implements)
au FileType go nmap <Leader>i <Plug>(go-info)
au FileType go nmap <Leader>gd <Plug>(go-doc)
au FileType go nmap <Leader>gv <Plug>(go-doc-vertical)
au FileType go nmap <leader>r <Plug>(go-run)
au FileType go nmap <leader>b <Plug>(go-build)
au FileType go nmap <leader>t <Plug>(go-test)
au FileType go nmap <leader>c <Plug>(go-coverage)
au FileType go nmap <Leader>ds <Plug>(go-def-split)
au FileType go nmap <Leader>dv <Plug>(go-def-vertical)
au FileType go nmap <Leader>dt <Plug>(go-def-tab)
au FileType go nmap <Leader>e <Plug>(go-rename)
" vim-go settings
let g:go_fmt_command = "goimports"
" 在save file时既可以格式化代码，又可以自动插入包导入语句（或删除不用的包导入语句）


" --------'mileszs/ack.vim'--------
nmap <F4> :Ack<CR>


"--------'vim-airline/vim-airline'--------
let g:airline_powerline_fonts = 1
let g:airline_theme = 'bubblegum'
"let g:airline#extensions#tabline#enabled = 1
"let g:airline#extensions#tabline#left_sep = ' '
"let g:airline#extensions#tabline#left_alt_sep = '|'
let g:airline#extensions#whitespace#enabled = 1

" to use fancy symbols for airline, uncomment the following lines and use a
" patched font (more info on the README.rst)
if !exists('g:airline_symbols')
   let g:airline_symbols = {}
endif

let g:airline_left_sep = ''
let g:airline_left_alt_sep = ''
let g:airline_right_sep = ''
let g:airline_right_alt_sep = ''
let g:airline_symbols.branch = ''
let g:airline_symbols.readonly = ''
let g:airline_symbols.linenr = ''

" --------'scrooloose/nerdcommenter'--------
" Add spaces after comment delimiters by default
let g:NERDSpaceDelims = 1
" Use compact syntax for prettified multi-line comments
let g:NERDCompactSexyComs = 1
" Align line-wise comment delimiters flush left instead of following code indentation
let g:NERDDefaultAlign = 'left'
" Set a language to use its alternate delimiters by default
let g:NERDAltDelims_java = 1
" Add your own custom formats or override the defaults
let g:NERDCustomDelimiters = { 'c': { 'left': '/**','right': '*/' } }
" Allow commenting and inverting empty lines (useful when commenting a region)
let g:NERDCommentEmptyLines = 1
" Enable trimming of trailing whitespace when uncommenting
let g:NERDTrimTrailingWhitespace = 1
" Enable NERDCommenterToggle to check all selected lines is commented or not
let g:NERDToggleCheckAllLines = 1

" --------'jiangmiao/auto-pairs'--------
" 匹配括号

" --------'wsdjeg/vim-cheat'--------
" 速查手册

“ --------'terryma/vim-expand-region'--------
" 快速选中

” --------'terryma/vim-multiple-cursors'--------
" 多光标操作

“ --------'terryma/vim-smooth-scroll'--------
” 平滑滚动
noremap <silent> <c-u> :call smooth_scroll#up(&scroll, 0, 2)<CR>
noremap <silent> <c-d> :call smooth_scroll#down(&scroll, 0, 2)<CR>
noremap <silent> <c-b> :call smooth_scroll#up(&scroll*2, 0, 4)<CR>
noremap <silent> <c-f> :call smooth_scroll#down(&scroll*2, 0, 4)<CR>

“ --------'tpope/vim-surround'--------
" 快速包裹


” --------'easymotion/vim-easymotion'--------
" 快速移动
" 更改快捷键
map f <Plug>(easymotion-prefix)
" 全屏搜索
map fp  <Plug>(easymotion-s)  
" 往下搜索
map fs <Plug>(easymotion-f)
" 行内向右搜索
map fl <Plug>(easymotion-lineforward)
" 行间向下搜索
map fj <Plug>(easymotion-j)
" 行间向上搜索
map fk <Plug>(easymotion-k)
" 行内向左搜索
map fh <Plug>(easymotion-linebackward)
" 忽略大小写
let g:EasyMotion_smartcase = 1
“ 以下常用
" fa 全屏搜索
" fs 往下搜索
" fF 往上搜索
" fl 行内向右搜索
" fj 行间向下搜索
" fk 行间向上搜索
" fh 行内向左搜索
" fw 往下搜索一个单词开始处
" fb 往上搜索一个单词开始处
" fe 往下搜索一个单词结尾处
" fge 往下搜索一个单词结尾处

“ --------'junegunn/goyo.vim'--------
” --------'junegunn/limelight.vim'--------
“ vim阅读模式+关灯
nmap <Leader>l :Goyo<CR>
autocmd! User GoyoEnter Limelight
autocmd! User GoyoLeave Limelight!
"进入goyo模式后自动触发limelight,退出后则关闭

” --------'ctrlpvim/ctrlp.vim'--------
“ 快速搜索文件
" 打开ctrlp搜索
let g:ctrlp_map = '<leader>ff'
let g:ctrlp_cmd = 'CtrlP'
" 相当于mru功能，show recently opened files
map <leader>fp :CtrlPMRU<CR>
"set wildignore+=*/tmp/*,*.so,*.swp,*.zip     " MacOSX/Linux"
let g:ctrlp_custom_ignore = {
    \ 'dir':  '\v[\/]\.(git|hg|svn|rvm)$',
    \ 'file': '\v\.(exe|so|dll|zip|tar|tar.gz)$',
    \ }
"\ 'link': 'SOME_BAD_SYMBOLIC_LINKS',
let g:ctrlp_working_path_mode=0
let g:ctrlp_match_window_bottom=1
let g:ctrlp_max_height=15
let g:ctrlp_match_window_reversed=0
let g:ctrlp_mruf_max=500
let g:ctrlp_follow_symlinks=1
"空格+ff启用搜索，空格+fp显示最近打开文件，
"在文件列表里上下移动都用Ctrl+k/j，
"Ctrl+p/n来在输入的搜索历史上下切换


” --------'majutsushi/tagbar'--------
"nmap <Leader>tb :TagbarToggle<CR>        "快捷键设置
let g:tagbar_ctags_bin='ctags'            "ctags程序的路径
let g:tagbar_width=30                    "窗口宽度的设置
map <F3> :Tagbar<CR>
"autocmd BufReadPost *.cpp,*.c,*.h,*.hpp,*.cc,*.cxx call tagbar#autoopen()     "如果是c语言的程序的话，tagbar自动开启

“ --------'t9md/vim-choosewin'--------
” 选择窗口
" mapping
nmap  -  <Plug>(choosewin)
" show big letters
let g:choosewin_overlay_enable = 1


“ --------'scrooloose/nerdtree'--------
"let NERDTreeWinPos='right'
let NERDTreeWinSize=30
map <F2> :NERDTreeToggle<CR>
" ctrl + w + w窗口切换


” --------'fholgado/minibufexpl.vim'--------
“ 多缓存区
let g:miniBufExplMapWindowNavVim = 1   
let g:miniBufExplMapWindowNavArrows = 1   
let g:miniBufExplMapCTabSwitchBufs = 1   
let g:miniBufExplModSelTarget = 1  
let g:miniBufExplMoreThanOne=0
map <F10> :MBEbp<CR>
map <F11> :MBEbn<CR>


“ --------'kien/tabman.vim'--------
” 管理Tab窗口
" mappings to toggle display, and to focus on it
let g:tabman_toggle = 'tl' "开启关闭tab
let g:tabman_focus  = 'tf' "将光标移动到tab管理窗口
let g:tabman_width = 25
let g:tabman_side = 'left'
let g:tabman_specials = 1 "设为0不显示由插件创建的窗口
let g:tabman_number = 1 "设为0关闭行号显示


” --------'w0rp/ale'--------
“ 异步检测错误
set nocompatible
filetype off
let &runtimepath.=',~/.vim/bundle/ale'
filetype plugin on
let g:ale_sign_column_always = 1
let g:ale_sign_error = '>>'
let g:ale_sign_warning = '--'
function! LinterStatus() abort
    let l:counts = ale#statusline#Count(bufnr(''))

    let l:all_errors = l:counts.error + l:counts.style_error
    let l:all_non_errors = l:counts.total - l:all_errors

    return l:counts.total == 0 ? 'OK' : printf(
    \   '%dW Þ',
    \   all_non_errors,
    \   all_errors
    \)
endfunction

set statusline=%{LinterStatus()}

let g:ale_statusline_format = ['⨉ %d', '⚠ %d', '⬥ ok']
let g:ale_echo_msg_error_str = 'E'
let g:ale_echo_msg_warning_str = 'W'
let g:ale_echo_msg_format = '[%linter%] %s [%severity%]'
nmap <silent> <C-k> <Plug>(ale_previous_wrap)
nmap <silent> <C-j> <Plug>(ale_next_wrap)


” --------'Valloric/YouCompleteMe'--------
“ 自动补全
let g:ycm_global_ycm_extra_conf = '~/.vim/bundle/YouCompleteMe/.ycm_extra_conf.py'   
let g:ycm_seed_identifiers_with_syntax=1    " 语法关键字补全   
let g:ycm_confirm_extra_conf=0   " 打开vim时不再询问是否加载ycm_extra_conf.py配置   
inoremap <expr> <CR>  pumvisible() ? "\<C-y>" : "\<CR>"    "回车即选中当前项   
set completeopt=longest,menu    "让Vim的补全菜单行为与一般IDE一致(参考VimTip1228)  
" YCM settings
let g:ycm_key_list_select_completion = ['', '']
let g:ycm_key_list_previous_completion = ['']
let g:ycm_key_invoke_completion = '<C-Space>'

” --------'skywind3000/asyncrun.vim'--------
“ 异步运行

” --------'skywind3000/quickmenu.vim'--------
“ 选择要执行的操作

“ --------'SirVer/ultisnips'--------'honza/vim-snippets'--------
” 代码片段补全
" Trigger configuration. Do not use <tab> if you use https://github.com/Valloric/YouCompleteMe.
let g:UltiSnipsExpandTrigger="<tab>"
let g:UltiSnipsJumpForwardTrigger="<c-b>"
let g:UltiSnipsJumpBackwardTrigger="<c-z>"

" If you want :UltiSnipsEdit to split your window.
let g:UltiSnipsEditSplit="vertical"





endif
