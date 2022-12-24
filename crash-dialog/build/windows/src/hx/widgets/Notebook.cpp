#include <hxcpp.h>

#ifndef INCLUDED_83f71eba104de7a2
#define INCLUDED_83f71eba104de7a2
#include "wx/gdicmn.h"
#endif
#ifndef INCLUDED_1b92b9574f32bb54
#define INCLUDED_1b92b9574f32bb54
#include "wx/imaglist.h"
#endif
#ifndef INCLUDED_3cdccfd42c43dcc1
#define INCLUDED_3cdccfd42c43dcc1
#include "wx/notebook.h"
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
#ifndef INCLUDED_hx_widgets_BookCtrlBase
#include <hx/widgets/BookCtrlBase.h>
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
#ifndef INCLUDED_hx_widgets_Notebook
#include <hx/widgets/Notebook.h>
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
#ifndef INCLUDED_hx_widgets_WithImages
#include <hx/widgets/WithImages.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d675bc56e6878544_10_new,"hx.widgets.Notebook","new",0xf1f8a96a,"hx.widgets.Notebook.new","hx/widgets/Notebook.hx",10,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_24_addPage,"hx.widgets.Notebook","addPage",0xd016431a,"hx.widgets.Notebook.addPage","hx/widgets/Notebook.hx",24,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_33_deletePage,"hx.widgets.Notebook","deletePage",0xe72f7450,"hx.widgets.Notebook.deletePage","hx/widgets/Notebook.hx",33,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_37_deleteAllPages,"hx.widgets.Notebook","deleteAllPages",0xce4a18e4,"hx.widgets.Notebook.deleteAllPages","hx/widgets/Notebook.hx",37,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_42_get_pageCount,"hx.widgets.Notebook","get_pageCount",0x2a1c3961,"hx.widgets.Notebook.get_pageCount","hx/widgets/Notebook.hx",42,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_47_get_imageList,"hx.widgets.Notebook","get_imageList",0x6389ceba,"hx.widgets.Notebook.get_imageList","hx/widgets/Notebook.hx",47,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_53_set_imageList,"hx.widgets.Notebook","set_imageList",0xa88fb0c6,"hx.widgets.Notebook.set_imageList","hx/widgets/Notebook.hx",53,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_60_get_selection,"hx.widgets.Notebook","get_selection",0xc7bd15ad,"hx.widgets.Notebook.get_selection","hx/widgets/Notebook.hx",60,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_62_set_selection,"hx.widgets.Notebook","set_selection",0x0cc2f7b9,"hx.widgets.Notebook.set_selection","hx/widgets/Notebook.hx",62,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_67_calcSizeFromPage,"hx.widgets.Notebook","calcSizeFromPage",0x7ea967a5,"hx.widgets.Notebook.calcSizeFromPage","hx/widgets/Notebook.hx",67,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_76_set_padding,"hx.widgets.Notebook","set_padding",0x75f8b3fe,"hx.widgets.Notebook.set_padding","hx/widgets/Notebook.hx",76,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_83_getPageText,"hx.widgets.Notebook","getPageText",0x90c95c5c,"hx.widgets.Notebook.getPageText","hx/widgets/Notebook.hx",83,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_88_setPageText,"hx.widgets.Notebook","setPageText",0x9b366368,"hx.widgets.Notebook.setPageText","hx/widgets/Notebook.hx",88,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_95_get_selectionText,"hx.widgets.Notebook","get_selectionText",0x2890e8fa,"hx.widgets.Notebook.get_selectionText","hx/widgets/Notebook.hx",95,0xb1430384)
HX_LOCAL_STACK_FRAME(_hx_pos_d675bc56e6878544_108_get_notebookRef,"hx.widgets.Notebook","get_notebookRef",0xdfdaee99,"hx.widgets.Notebook.get_notebookRef","hx/widgets/Notebook.hx",108,0xb1430384)
namespace hx{
namespace widgets{

void Notebook_obj::__construct( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id){
            		int style = __o_style.Default(0);
            		int id = __o_id.Default(-1);
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_10_new)
HXLINE(  11)		this->allowIcons = true;
HXLINE(  13)		if (::hx::IsNull( this->_ref )) {
HXLINE(  14)			this->_ref = ::cpp::Pointer_obj::fromRaw((new wxNotebook()))->reinterpret();
HXLINE(  15)			 wxNotebook * _hx_tmp = this->get_notebookRef()->ptr;
HXDLIN(  15)			 wxWindow* _hx_tmp1 = ::hx::widgets::Window_obj::toRaw(parent);
HXDLIN(  15)			 wxPoint & _hx_tmp2 = ::hx::widgets::Point_obj::get_defaultPosition()->get_ref();
HXDLIN(  15)			 wxSize & _hx_tmp3 = ::hx::widgets::Size_obj::get_defaultSize()->get_ref();
HXDLIN(  15)			(*(_hx_tmp)).Create(_hx_tmp1,id,_hx_tmp2,_hx_tmp3,style);
            		}
HXLINE(  18)		super::__construct(parent,id,null());
            	}

Dynamic Notebook_obj::__CreateEmpty() { return new Notebook_obj; }

void *Notebook_obj::_hx_vtable = 0;

Dynamic Notebook_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Notebook_obj > _hx_result = new Notebook_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Notebook_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27e64064) {
		if (inClassId<=(int)0x2045b63e) {
			if (inClassId<=(int)0x0345708e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0345708e;
			} else {
				return inClassId==(int)0x2045b63e;
			}
		} else {
			return inClassId==(int)0x27e64064;
		}
	} else {
		if (inClassId<=(int)0x467ba226) {
			return inClassId==(int)0x2fdf5e76 || inClassId==(int)0x467ba226;
		} else {
			return inClassId==(int)0x5d92cb6f;
		}
	}
}

bool Notebook_obj::addPage( ::hx::widgets::Window page,::String text,::hx::Null< bool >  __o_select,::hx::Null< int >  __o_imageId){
            		bool select = __o_select.Default(false);
            		int imageId = __o_imageId.Default(-1);
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_24_addPage)
HXLINE(  25)		if (!(this->allowIcons)) {
HXLINE(  26)			imageId = -1;
            		}
HXLINE(  28)		const char* this1 = text.utf8_str();
HXDLIN(  28)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  29)		 wxNotebook * _hx_tmp = this->get_notebookRef()->ptr;
HXDLIN(  29)		return (*(_hx_tmp)).AddPage(::hx::widgets::Window_obj::toRaw(page),str,select,imageId);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Notebook_obj,addPage,return )

bool Notebook_obj::deletePage(int page){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_33_deletePage)
HXDLIN(  33)		return this->get_notebookRef()->ptr->DeletePage(page);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Notebook_obj,deletePage,return )

bool Notebook_obj::deleteAllPages(){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_37_deleteAllPages)
HXDLIN(  37)		return this->get_notebookRef()->ptr->DeleteAllPages();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Notebook_obj,deleteAllPages,return )

int Notebook_obj::get_pageCount(){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_42_get_pageCount)
HXDLIN(  42)		return this->get_notebookRef()->ptr->GetPageCount();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Notebook_obj,get_pageCount,return )

 ::hx::widgets::ImageList Notebook_obj::get_imageList(){
            	HX_GC_STACKFRAME(&_hx_pos_d675bc56e6878544_47_get_imageList)
HXLINE(  48)		 ::hx::widgets::ImageList list =  ::hx::widgets::ImageList_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  49)		list->_ref = ::cpp::Pointer_obj::fromRaw(this->get_notebookRef()->ptr->GetImageList())->reinterpret();
HXLINE(  50)		return list;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Notebook_obj,get_imageList,return )

 ::hx::widgets::ImageList Notebook_obj::set_imageList( ::hx::widgets::ImageList value){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_53_set_imageList)
HXLINE(  54)		 wxNotebook * _hx_tmp = this->get_notebookRef()->ptr;
HXDLIN(  54)		(*(_hx_tmp)).SetImageList(value->get_imagelistRef()->get_raw());
HXLINE(  55)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Notebook_obj,set_imageList,return )

int Notebook_obj::get_selection(){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_60_get_selection)
HXDLIN(  60)		return this->get_notebookRef()->ptr->GetSelection();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Notebook_obj,get_selection,return )

int Notebook_obj::set_selection(int value){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_62_set_selection)
HXLINE(  63)		this->get_notebookRef()->ptr->SetSelection(value);
HXLINE(  64)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Notebook_obj,set_selection,return )

 ::hx::widgets::Size Notebook_obj::calcSizeFromPage(){
            	HX_GC_STACKFRAME(&_hx_pos_d675bc56e6878544_67_calcSizeFromPage)
HXLINE(  68)		 ::hx::widgets::Size pageSize =  ::hx::widgets::Size_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  69)		::cpp::Pointer<  wxSize > temp = pageSize->createPointer();
HXLINE(  70)		 wxNotebook * r = this->get_notebookRef()->ptr;
HXDLIN(  70)		 wxSize r1 = (*(r)).CalcSizeFromPage(temp->get_ref());
HXLINE(  71)		temp->destroy();
HXLINE(  72)		return ::hx::widgets::Size_obj::copy(r1);
            	}


 ::hx::widgets::Size Notebook_obj::set_padding( ::hx::widgets::Size value){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_76_set_padding)
HXLINE(  77)		::cpp::Pointer<  wxSize > temp = value->createPointer();
HXLINE(  78)		 wxNotebook * _hx_tmp = this->get_notebookRef()->ptr;
HXDLIN(  78)		(*(_hx_tmp)).SetPadding(temp->get_ref());
HXLINE(  79)		temp->destroy();
HXLINE(  80)		return value;
            	}


::String Notebook_obj::getPageText(int page){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_83_getPageText)
HXLINE(  84)		 wxString r = this->get_notebookRef()->ptr->GetPageText(page);
HXLINE(  85)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Notebook_obj,getPageText,return )

bool Notebook_obj::setPageText(int page,::String text){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_88_setPageText)
HXLINE(  89)		const char* this1 = text.utf8_str();
HXDLIN(  89)		 wxString str = wxString::FromUTF8(this1);
HXLINE(  90)		return this->get_notebookRef()->ptr->SetPageText(page,str);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Notebook_obj,setPageText,return )

::String Notebook_obj::get_selectionText(){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_95_get_selectionText)
HXDLIN(  95)		return this->getPageText(this->get_selection());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Notebook_obj,get_selectionText,return )

::cpp::Pointer<  wxNotebook > Notebook_obj::get_notebookRef(){
            	HX_STACKFRAME(&_hx_pos_d675bc56e6878544_108_get_notebookRef)
HXDLIN( 108)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Notebook_obj,get_notebookRef,return )


::hx::ObjectPtr< Notebook_obj > Notebook_obj::__new( ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	::hx::ObjectPtr< Notebook_obj > __this = new Notebook_obj();
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

::hx::ObjectPtr< Notebook_obj > Notebook_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::hx::Null< int >  __o_style,::hx::Null< int >  __o_id) {
	Notebook_obj *__this = (Notebook_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Notebook_obj), true, "hx.widgets.Notebook"));
	*(void **)__this = Notebook_obj::_hx_vtable;
	__this->__construct(parent,__o_style,__o_id);
	return __this;
}

Notebook_obj::Notebook_obj()
{
}

void Notebook_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Notebook);
	HX_MARK_MEMBER_NAME(pageCount,"pageCount");
	HX_MARK_MEMBER_NAME(padding,"padding");
	HX_MARK_MEMBER_NAME(selectionText,"selectionText");
	HX_MARK_MEMBER_NAME(allowIcons,"allowIcons");
	HX_MARK_MEMBER_NAME(notebookRef,"notebookRef");
	 ::hx::widgets::Control_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Notebook_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pageCount,"pageCount");
	HX_VISIT_MEMBER_NAME(padding,"padding");
	HX_VISIT_MEMBER_NAME(selectionText,"selectionText");
	HX_VISIT_MEMBER_NAME(allowIcons,"allowIcons");
	HX_VISIT_MEMBER_NAME(notebookRef,"notebookRef");
	 ::hx::widgets::Control_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Notebook_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"addPage") ) { return ::hx::Val( addPage_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageCount") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_pageCount() : pageCount ); }
		if (HX_FIELD_EQ(inName,"imageList") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageList() ); }
		if (HX_FIELD_EQ(inName,"selection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_selection() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"deletePage") ) { return ::hx::Val( deletePage_dyn() ); }
		if (HX_FIELD_EQ(inName,"allowIcons") ) { return ::hx::Val( allowIcons ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getPageText") ) { return ::hx::Val( getPageText_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPageText") ) { return ::hx::Val( setPageText_dyn() ); }
		if (HX_FIELD_EQ(inName,"notebookRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_notebookRef() : notebookRef ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_pageCount") ) { return ::hx::Val( get_pageCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_imageList") ) { return ::hx::Val( get_imageList_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_imageList") ) { return ::hx::Val( set_imageList_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_selection") ) { return ::hx::Val( get_selection_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_selection") ) { return ::hx::Val( set_selection_dyn() ); }
		if (HX_FIELD_EQ(inName,"selectionText") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_selectionText() : selectionText ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"deleteAllPages") ) { return ::hx::Val( deleteAllPages_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_notebookRef") ) { return ::hx::Val( get_notebookRef_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectionText") ) { return ::hx::Val( get_selectionText_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Notebook_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"pageCount") ) { pageCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageList") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_imageList(inValue.Cast<  ::hx::widgets::ImageList >()) ); }
		if (HX_FIELD_EQ(inName,"selection") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_selection(inValue.Cast< int >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"allowIcons") ) { allowIcons=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"notebookRef") ) { notebookRef=inValue.Cast< ::cpp::Pointer<  wxNotebook > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectionText") ) { selectionText=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Notebook_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pageCount",00,1c,7a,f0));
	outFields->push(HX_("imageList",59,b1,e7,29));
	outFields->push(HX_("selection",4c,f8,1a,8e));
	outFields->push(HX_("padding",d1,59,7d,d0));
	outFields->push(HX_("selectionText",19,07,3e,fd));
	outFields->push(HX_("allowIcons",91,5d,a3,e1));
	outFields->push(HX_("notebookRef",f8,f6,6d,63));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Notebook_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Notebook_obj,pageCount),HX_("pageCount",00,1c,7a,f0)},
	{::hx::fsObject /*  ::hx::widgets::Size */ ,(int)offsetof(Notebook_obj,padding),HX_("padding",d1,59,7d,d0)},
	{::hx::fsString,(int)offsetof(Notebook_obj,selectionText),HX_("selectionText",19,07,3e,fd)},
	{::hx::fsBool,(int)offsetof(Notebook_obj,allowIcons),HX_("allowIcons",91,5d,a3,e1)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxNotebook > */ ,(int)offsetof(Notebook_obj,notebookRef),HX_("notebookRef",f8,f6,6d,63)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Notebook_obj_sStaticStorageInfo = 0;
#endif

static ::String Notebook_obj_sMemberFields[] = {
	HX_("addPage",10,1d,8f,86),
	HX_("deletePage",1a,b8,9e,9d),
	HX_("deleteAllPages",ae,09,08,10),
	HX_("pageCount",00,1c,7a,f0),
	HX_("get_pageCount",d7,ef,dd,b1),
	HX_("get_imageList",30,85,4b,eb),
	HX_("set_imageList",3c,67,51,30),
	HX_("get_selection",23,cc,7e,4f),
	HX_("set_selection",2f,ae,84,94),
	HX_("getPageText",52,69,b5,7b),
	HX_("setPageText",5e,70,22,86),
	HX_("selectionText",19,07,3e,fd),
	HX_("get_selectionText",70,12,ae,03),
	HX_("allowIcons",91,5d,a3,e1),
	HX_("notebookRef",f8,f6,6d,63),
	HX_("get_notebookRef",8f,ae,4f,24),
	::String(null()) };

::hx::Class Notebook_obj::__mClass;

void Notebook_obj::__register()
{
	Notebook_obj _hx_dummy;
	Notebook_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.Notebook",78,6c,01,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Notebook_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Notebook_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Notebook_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Notebook_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
