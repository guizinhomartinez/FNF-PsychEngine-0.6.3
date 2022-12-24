#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_1b92b9574f32bb54
#define INCLUDED_1b92b9574f32bb54
#include "wx/imaglist.h"
#endif
#ifndef INCLUDED_255fe586a8b249f3
#define INCLUDED_255fe586a8b249f3
#include "wx/listctrl.h"
#endif
#ifndef INCLUDED_eb4c1394ce7c5dd4
#define INCLUDED_eb4c1394ce7c5dd4
#include "wx/object.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_aa68ac286eaa278a
#define INCLUDED_aa68ac286eaa278a
#include "wx/window.h"
#endif
#ifndef INCLUDED_hx_widgets_Control
#include <hx/widgets/Control.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_ImageList
#include <hx/widgets/ImageList.h>
#endif
#ifndef INCLUDED_hx_widgets_ListCtrl
#include <hx/widgets/ListCtrl.h>
#endif
#ifndef INCLUDED_hx_widgets_ListItem
#include <hx/widgets/ListItem.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_Point
#include <hx/widgets/Point.h>
#endif
#ifndef INCLUDED_hx_widgets_Size
#include <hx/widgets/Size.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_ListState
#include <wx/widgets/ListState.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_ListCtrlStyle
#include <wx/widgets/styles/ListCtrlStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cd239fab779fd691_10_new,"hx.widgets.ListCtrl","new",0xae662378,"hx.widgets.ListCtrl.new","hx/widgets/ListCtrl.hx",10,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_27_insertItem,"hx.widgets.ListCtrl","insertItem",0xfb9384d4,"hx.widgets.ListCtrl.insertItem","hx/widgets/ListCtrl.hx",27,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_35_setItemState,"hx.widgets.ListCtrl","setItemState",0xd3cd25e4,"hx.widgets.ListCtrl.setItemState","hx/widgets/ListCtrl.hx",35,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_40_setItem,"hx.widgets.ListCtrl","setItem",0x3e19c4ed,"hx.widgets.ListCtrl.setItem","hx/widgets/ListCtrl.hx",40,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_48_addItem,"hx.widgets.ListCtrl","addItem",0xb4d2c6ec,"hx.widgets.ListCtrl.addItem","hx/widgets/ListCtrl.hx",48,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_54_deleteItem,"hx.widgets.ListCtrl","deleteItem",0x68f562c6,"hx.widgets.ListCtrl.deleteItem","hx/widgets/ListCtrl.hx",54,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_58_deleteAllItems,"hx.widgets.ListCtrl","deleteAllItems",0x16725e52,"hx.widgets.ListCtrl.deleteAllItems","hx/widgets/ListCtrl.hx",58,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_62_ensureVisible,"hx.widgets.ListCtrl","ensureVisible",0x66351f6c,"hx.widgets.ListCtrl.ensureVisible","hx/widgets/ListCtrl.hx",62,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_67_get_itemCount,"hx.widgets.ListCtrl","get_itemCount",0xf5e49fab,"hx.widgets.ListCtrl.get_itemCount","hx/widgets/ListCtrl.hx",67,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_72_get_selectedItemCount,"hx.widgets.ListCtrl","get_selectedItemCount",0x8742b8d0,"hx.widgets.ListCtrl.get_selectedItemCount","hx/widgets/ListCtrl.hx",72,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_76_set_enableAlternateRowColours,"hx.widgets.ListCtrl","set_enableAlternateRowColours",0x5a1275bf,"hx.widgets.ListCtrl.set_enableAlternateRowColours","hx/widgets/ListCtrl.hx",76,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_83_get_largeImageList,"hx.widgets.ListCtrl","get_largeImageList",0x348756cf,"hx.widgets.ListCtrl.get_largeImageList","hx/widgets/ListCtrl.hx",83,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_89_set_largeImageList,"hx.widgets.ListCtrl","set_largeImageList",0x11368943,"hx.widgets.ListCtrl.set_largeImageList","hx/widgets/ListCtrl.hx",89,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_96_get_smallImageList,"hx.widgets.ListCtrl","get_smallImageList",0x34f59843,"hx.widgets.ListCtrl.get_smallImageList","hx/widgets/ListCtrl.hx",96,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_102_set_smallImageList,"hx.widgets.ListCtrl","set_smallImageList",0x11a4cab7,"hx.widgets.ListCtrl.set_smallImageList","hx/widgets/ListCtrl.hx",102,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_107_appendColumn,"hx.widgets.ListCtrl","appendColumn",0x9d600e38,"hx.widgets.ListCtrl.appendColumn","hx/widgets/ListCtrl.hx",107,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_114_getNextItem,"hx.widgets.ListCtrl","getNextItem",0x333f5974,"hx.widgets.ListCtrl.getNextItem","hx/widgets/ListCtrl.hx",114,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_118_getItem,"hx.widgets.ListCtrl","getItem",0x4b1833e1,"hx.widgets.ListCtrl.getItem","hx/widgets/ListCtrl.hx",118,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_125_get_selectedIndexes,"hx.widgets.ListCtrl","get_selectedIndexes",0xa0f9fd14,"hx.widgets.ListCtrl.get_selectedIndexes","hx/widgets/ListCtrl.hx",125,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_137_get_selectedIndex,"hx.widgets.ListCtrl","get_selectedIndex",0xb0bb0f26,"hx.widgets.ListCtrl.get_selectedIndex","hx/widgets/ListCtrl.hx",137,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_144_set_selectedIndex,"hx.widgets.ListCtrl","set_selectedIndex",0xd428e732,"hx.widgets.ListCtrl.set_selectedIndex","hx/widgets/ListCtrl.hx",144,0x66570536)
HX_LOCAL_STACK_FRAME(_hx_pos_cd239fab779fd691_158_get_listCtrlRef,"hx.widgets.ListCtrl","get_listCtrlRef",0x4d324759,"hx.widgets.ListCtrl.get_listCtrlRef","hx/widgets/ListCtrl.hx",158,0x66570536)
namespace hx{
namespace widgets{

void ListCtrl_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_10_new)
HXLINE(  12)		if ((style == 0)) {
HXLINE(  13)			style = ::wx::widgets::styles::ListCtrlStyle_obj::ICON;
            		}
HXLINE(  16)		if (::hx::IsNull( this->_ref )) {
HXLINE(  17)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxListCtrl()))->reinterpret();
HXLINE(  18)			 wxListCtrl * _hx_tmp = this->get_listCtrlRef()->ptr;
HXDLIN(  18)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  18)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  18)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  18)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  21)		super::__construct(parent,id,null());
            	}

Dynamic ListCtrl_obj::__CreateEmpty() { return new ListCtrl_obj; }

void *ListCtrl_obj::_hx_vtable = 0;

Dynamic ListCtrl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListCtrl_obj > _hx_result = new ListCtrl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ListCtrl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x33eec5a0) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x33eec5a0;
		}
	} else {
		return inClassId==(int)0x467ba226 || inClassId==(int)0x5d92cb6f;
	}
}

int ListCtrl_obj::insertItem( ::hx::widgets::ListItem item,::hx::Null< bool >  __o_autoDestroy){
            		bool autoDestroy = __o_autoDestroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_27_insertItem)
HXLINE(  28)		 wxListCtrl * n = this->get_listCtrlRef()->ptr;
HXDLIN(  28)		int n1 = (*(n)).InsertItem(item->get_listItemRef()->get_ref());
HXLINE(  29)		if ((autoDestroy == true)) {
HXLINE(  30)			item->destroy();
            		}
HXLINE(  32)		return n1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ListCtrl_obj,insertItem,return )

bool ListCtrl_obj::setItemState(int item,int state,int stateMask){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_35_setItemState)
HXLINE(  36)		bool b = this->get_listCtrlRef()->ptr->SetItemState(item,state,stateMask);
HXLINE(  37)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC3(ListCtrl_obj,setItemState,return )

bool ListCtrl_obj::setItem( ::hx::widgets::ListItem item,::hx::Null< bool >  __o_autoDestroy){
            		bool autoDestroy = __o_autoDestroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_40_setItem)
HXLINE(  41)		 wxListCtrl * b = this->get_listCtrlRef()->ptr;
HXDLIN(  41)		bool b1 = (*(b)).SetItem(item->get_listItemRef()->get_ref());
HXLINE(  42)		if ((autoDestroy == true)) {
HXLINE(  43)			item->destroy();
            		}
HXLINE(  45)		return b1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ListCtrl_obj,setItem,return )

int ListCtrl_obj::addItem( ::hx::widgets::ListItem item,::hx::Null< bool >  __o_autoDestroy){
            		bool autoDestroy = __o_autoDestroy.Default(true);
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_48_addItem)
HXLINE(  49)		item->set_id(this->get_itemCount());
HXLINE(  50)		return this->insertItem(item,autoDestroy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ListCtrl_obj,addItem,return )

bool ListCtrl_obj::deleteItem(int index){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_54_deleteItem)
HXDLIN(  54)		return this->get_listCtrlRef()->ptr->DeleteItem(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListCtrl_obj,deleteItem,return )

bool ListCtrl_obj::deleteAllItems(){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_58_deleteAllItems)
HXDLIN(  58)		return this->get_listCtrlRef()->ptr->DeleteAllItems();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCtrl_obj,deleteAllItems,return )

bool ListCtrl_obj::ensureVisible(int item){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_62_ensureVisible)
HXDLIN(  62)		return this->get_listCtrlRef()->ptr->EnsureVisible(item);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListCtrl_obj,ensureVisible,return )

int ListCtrl_obj::get_itemCount(){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_67_get_itemCount)
HXDLIN(  67)		return this->get_listCtrlRef()->ptr->GetItemCount();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCtrl_obj,get_itemCount,return )

int ListCtrl_obj::get_selectedItemCount(){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_72_get_selectedItemCount)
HXDLIN(  72)		return this->get_listCtrlRef()->ptr->GetSelectedItemCount();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCtrl_obj,get_selectedItemCount,return )

bool ListCtrl_obj::set_enableAlternateRowColours(bool value){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_76_set_enableAlternateRowColours)
HXLINE(  77)		this->get_listCtrlRef()->ptr->EnableAlternateRowColours(value);
HXLINE(  78)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListCtrl_obj,set_enableAlternateRowColours,return )

 ::hx::widgets::ImageList ListCtrl_obj::get_largeImageList(){
            	HX_GC_STACKFRAME(&_hx_pos_cd239fab779fd691_83_get_largeImageList)
HXLINE(  84)		 ::hx::widgets::ImageList list =  ::hx::widgets::ImageList_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  85)		 wxListCtrl * _hx_tmp = this->get_listCtrlRef()->ptr;
HXDLIN(  85)		list->_ref = ::cpp::Pointer_obj::fromRaw((*(_hx_tmp)).GetImageList(wxIMAGE_LIST_NORMAL))->reinterpret();
HXLINE(  86)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCtrl_obj,get_largeImageList,return )

 ::hx::widgets::ImageList ListCtrl_obj::set_largeImageList( ::hx::widgets::ImageList value){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_89_set_largeImageList)
HXLINE(  90)		 wxListCtrl * _hx_tmp = this->get_listCtrlRef()->ptr;
HXDLIN(  90)		 wxImageList* _hx_tmp1 = value->get_imagelistRef()->get_raw();
HXDLIN(  90)		(*(_hx_tmp)).SetImageList(_hx_tmp1,wxIMAGE_LIST_NORMAL);
HXLINE(  91)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListCtrl_obj,set_largeImageList,return )

 ::hx::widgets::ImageList ListCtrl_obj::get_smallImageList(){
            	HX_GC_STACKFRAME(&_hx_pos_cd239fab779fd691_96_get_smallImageList)
HXLINE(  97)		 ::hx::widgets::ImageList list =  ::hx::widgets::ImageList_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  98)		 wxListCtrl * _hx_tmp = this->get_listCtrlRef()->ptr;
HXDLIN(  98)		list->_ref = ::cpp::Pointer_obj::fromRaw((*(_hx_tmp)).GetImageList(wxIMAGE_LIST_SMALL))->reinterpret();
HXLINE(  99)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCtrl_obj,get_smallImageList,return )

 ::hx::widgets::ImageList ListCtrl_obj::set_smallImageList( ::hx::widgets::ImageList value){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_102_set_smallImageList)
HXLINE( 103)		 wxListCtrl * _hx_tmp = this->get_listCtrlRef()->ptr;
HXDLIN( 103)		 wxImageList* _hx_tmp1 = value->get_imagelistRef()->get_raw();
HXDLIN( 103)		(*(_hx_tmp)).SetImageList(_hx_tmp1,wxIMAGE_LIST_SMALL);
HXLINE( 104)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListCtrl_obj,set_smallImageList,return )

int ListCtrl_obj::appendColumn(::String heading){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_107_appendColumn)
HXLINE( 108)		const char* this1 = heading.utf8_str();
HXDLIN( 108)		 wxString s = wxString::FromUTF8(this1);
HXLINE( 109)		int n = this->get_listCtrlRef()->ptr->AppendColumn(s);
HXLINE( 110)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListCtrl_obj,appendColumn,return )

int ListCtrl_obj::getNextItem(int item,int state){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_114_getNextItem)
HXDLIN( 114)		 wxListCtrl * _hx_tmp = this->get_listCtrlRef()->ptr;
HXDLIN( 114)		return (*(_hx_tmp)).GetNextItem(item,wxLIST_NEXT_ALL,state);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ListCtrl_obj,getNextItem,return )

bool ListCtrl_obj::getItem( ::hx::widgets::ListItem info){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_118_getItem)
HXLINE( 119)		::cpp::Pointer<  wxListItem > p = info->get_listItemRef();
HXLINE( 120)		 wxListCtrl * _hx_tmp = this->get_listCtrlRef()->ptr;
HXDLIN( 120)		return (*(_hx_tmp)).GetItem(p->get_ref());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListCtrl_obj,getItem,return )

::Array< int > ListCtrl_obj::get_selectedIndexes(){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_125_get_selectedIndexes)
HXLINE( 126)		::Array< int > indexes = ::Array_obj< int >::__new(0);
HXLINE( 128)		int itemIndex = -1;
HXLINE( 129)		while(true){
HXLINE( 129)			itemIndex = this->getNextItem(itemIndex,::wx::widgets::ListState_obj::SELECTED);
HXDLIN( 129)			if (!((itemIndex != -1))) {
HXLINE( 129)				goto _hx_goto_18;
            			}
HXLINE( 130)			indexes->push(itemIndex);
            		}
            		_hx_goto_18:;
HXLINE( 133)		return indexes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCtrl_obj,get_selectedIndexes,return )

int ListCtrl_obj::get_selectedIndex(){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_137_get_selectedIndex)
HXLINE( 138)		::Array< int > indexes = this->get_selectedIndexes();
HXLINE( 139)		if ((indexes->length == 0)) {
HXLINE( 140)			return -1;
            		}
HXLINE( 142)		return indexes->__get(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCtrl_obj,get_selectedIndex,return )

int ListCtrl_obj::set_selectedIndex(int value){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_144_set_selectedIndex)
HXLINE( 145)		{
HXLINE( 145)			int _g = 0;
HXDLIN( 145)			::Array< int > _g1 = this->get_selectedIndexes();
HXDLIN( 145)			while((_g < _g1->length)){
HXLINE( 145)				int i = _g1->__get(_g);
HXDLIN( 145)				_g = (_g + 1);
HXLINE( 146)				this->setItemState(i,0,::wx::widgets::ListState_obj::SELECTED);
            			}
            		}
HXLINE( 148)		this->setItemState(value,::wx::widgets::ListState_obj::SELECTED,::wx::widgets::ListState_obj::SELECTED);
HXLINE( 149)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListCtrl_obj,set_selectedIndex,return )

::cpp::Pointer<  wxListCtrl > ListCtrl_obj::get_listCtrlRef(){
            	HX_STACKFRAME(&_hx_pos_cd239fab779fd691_158_get_listCtrlRef)
HXDLIN( 158)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListCtrl_obj,get_listCtrlRef,return )


::hx::ObjectPtr< ListCtrl_obj > ListCtrl_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< ListCtrl_obj > __this = new ListCtrl_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< ListCtrl_obj > ListCtrl_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	ListCtrl_obj *__this = (ListCtrl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListCtrl_obj), true, "hx.widgets.ListCtrl"));
	*(void **)__this = ListCtrl_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

ListCtrl_obj::ListCtrl_obj()
{
}

void ListCtrl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListCtrl);
	HX_MARK_MEMBER_NAME(itemCount,"itemCount");
	HX_MARK_MEMBER_NAME(selectedItemCount,"selectedItemCount");
	HX_MARK_MEMBER_NAME(enableAlternateRowColours,"enableAlternateRowColours");
	HX_MARK_MEMBER_NAME(selectedIndexes,"selectedIndexes");
	HX_MARK_MEMBER_NAME(listCtrlRef,"listCtrlRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListCtrl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(itemCount,"itemCount");
	HX_VISIT_MEMBER_NAME(selectedItemCount,"selectedItemCount");
	HX_VISIT_MEMBER_NAME(enableAlternateRowColours,"enableAlternateRowColours");
	HX_VISIT_MEMBER_NAME(selectedIndexes,"selectedIndexes");
	HX_VISIT_MEMBER_NAME(listCtrlRef,"listCtrlRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ListCtrl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"setItem") ) { return ::hx::Val( setItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"addItem") ) { return ::hx::Val( addItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"getItem") ) { return ::hx::Val( getItem_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"itemCount") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_itemCount() : itemCount ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"insertItem") ) { return ::hx::Val( insertItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"deleteItem") ) { return ::hx::Val( deleteItem_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getNextItem") ) { return ::hx::Val( getNextItem_dyn() ); }
		if (HX_FIELD_EQ(inName,"listCtrlRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_listCtrlRef() : listCtrlRef ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setItemState") ) { return ::hx::Val( setItemState_dyn() ); }
		if (HX_FIELD_EQ(inName,"appendColumn") ) { return ::hx::Val( appendColumn_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ensureVisible") ) { return ::hx::Val( ensureVisible_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_itemCount") ) { return ::hx::Val( get_itemCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selectedIndex() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"deleteAllItems") ) { return ::hx::Val( deleteAllItems_dyn() ); }
		if (HX_FIELD_EQ(inName,"largeImageList") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_largeImageList() ); }
		if (HX_FIELD_EQ(inName,"smallImageList") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_smallImageList() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selectedIndexes") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_selectedIndexes() : selectedIndexes ); }
		if (HX_FIELD_EQ(inName,"get_listCtrlRef") ) { return ::hx::Val( get_listCtrlRef_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"selectedItemCount") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_selectedItemCount() : selectedItemCount ); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return ::hx::Val( get_selectedIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return ::hx::Val( set_selectedIndex_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_largeImageList") ) { return ::hx::Val( get_largeImageList_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_largeImageList") ) { return ::hx::Val( set_largeImageList_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_smallImageList") ) { return ::hx::Val( get_smallImageList_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_smallImageList") ) { return ::hx::Val( set_smallImageList_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_selectedIndexes") ) { return ::hx::Val( get_selectedIndexes_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_selectedItemCount") ) { return ::hx::Val( get_selectedItemCount_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"enableAlternateRowColours") ) { return ::hx::Val( enableAlternateRowColours ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"set_enableAlternateRowColours") ) { return ::hx::Val( set_enableAlternateRowColours_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ListCtrl_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"itemCount") ) { itemCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listCtrlRef") ) { listCtrlRef=inValue.Cast< ::cpp::Pointer<  wxListCtrl > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selectedIndex(inValue.Cast< int >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"largeImageList") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_largeImageList(inValue.Cast<  ::hx::widgets::ImageList >()) ); }
		if (HX_FIELD_EQ(inName,"smallImageList") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_smallImageList(inValue.Cast<  ::hx::widgets::ImageList >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selectedIndexes") ) { selectedIndexes=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"selectedItemCount") ) { selectedItemCount=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"enableAlternateRowColours") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_enableAlternateRowColours(inValue.Cast< bool >()) );enableAlternateRowColours=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListCtrl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("itemCount",bc,aa,4e,4a));
	outFields->push(HX_("selectedItemCount",e1,bc,37,b7));
	outFields->push(HX_("enableAlternateRowColours",c4,b8,db,0c));
	outFields->push(HX_("largeImageList",1e,8e,e6,58));
	outFields->push(HX_("smallImageList",92,cf,54,59));
	outFields->push(HX_("selectedIndexes",e5,2a,eb,4f));
	outFields->push(HX_("selectedIndex",b7,76,56,b4));
	outFields->push(HX_("listCtrlRef",aa,f8,81,18));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ListCtrl_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ListCtrl_obj,itemCount),HX_("itemCount",bc,aa,4e,4a)},
	{::hx::fsInt,(int)offsetof(ListCtrl_obj,selectedItemCount),HX_("selectedItemCount",e1,bc,37,b7)},
	{::hx::fsBool,(int)offsetof(ListCtrl_obj,enableAlternateRowColours),HX_("enableAlternateRowColours",c4,b8,db,0c)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ListCtrl_obj,selectedIndexes),HX_("selectedIndexes",e5,2a,eb,4f)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxListCtrl > */ ,(int)offsetof(ListCtrl_obj,listCtrlRef),HX_("listCtrlRef",aa,f8,81,18)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ListCtrl_obj_sStaticStorageInfo = 0;
#endif

static ::String ListCtrl_obj_sMemberFields[] = {
	HX_("insertItem",ec,c4,aa,2b),
	HX_("setItemState",fc,9b,46,a8),
	HX_("setItem",d5,05,44,0b),
	HX_("addItem",d4,07,fd,81),
	HX_("deleteItem",de,a2,0c,99),
	HX_("deleteAllItems",6a,8a,c7,14),
	HX_("ensureVisible",54,fe,02,7c),
	HX_("itemCount",bc,aa,4e,4a),
	HX_("get_itemCount",93,7e,b2,0b),
	HX_("selectedItemCount",e1,bc,37,b7),
	HX_("get_selectedItemCount",b8,bf,e5,35),
	HX_("enableAlternateRowColours",c4,b8,db,0c),
	HX_("set_enableAlternateRowColours",a7,a4,f2,b6),
	HX_("get_largeImageList",e7,6e,80,f4),
	HX_("set_largeImageList",5b,a1,2f,d1),
	HX_("get_smallImageList",5b,b0,ee,f4),
	HX_("set_smallImageList",cf,e2,9d,d1),
	HX_("appendColumn",50,84,d9,71),
	HX_("getNextItem",5c,2e,80,17),
	HX_("getItem",c9,74,42,18),
	HX_("selectedIndexes",e5,2a,eb,4f),
	HX_("get_selectedIndexes",fc,f9,f5,da),
	HX_("get_selectedIndex",0e,82,c6,ba),
	HX_("set_selectedIndex",1a,5a,34,de),
	HX_("listCtrlRef",aa,f8,81,18),
	HX_("get_listCtrlRef",41,b0,63,d9),
	::String(null()) };

::hx::Class ListCtrl_obj::__mClass;

void ListCtrl_obj::__register()
{
	ListCtrl_obj _hx_dummy;
	ListCtrl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.ListCtrl",86,47,49,9c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ListCtrl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ListCtrl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListCtrl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListCtrl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
