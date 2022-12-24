#include <hxcpp.h>

#ifndef INCLUDED_d17caf3128e9a450
#define INCLUDED_d17caf3128e9a450
#include "wx/arrstr.h"
#endif
#ifndef INCLUDED_cb2edad35d09ff98
#define INCLUDED_cb2edad35d09ff98
#include "wx/filedlg.h"
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
#ifndef INCLUDED_hx_widgets_ArrayString
#include <hx/widgets/ArrayString.h>
#endif
#ifndef INCLUDED_hx_widgets_Dialog
#include <hx/widgets/Dialog.h>
#endif
#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_hx_widgets_FileDialog
#include <hx/widgets/FileDialog.h>
#endif
#ifndef INCLUDED_hx_widgets_NonOwnedWindow
#include <hx/widgets/NonOwnedWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif
#ifndef INCLUDED_hx_widgets_TopLevelWindow
#include <hx/widgets/TopLevelWindow.h>
#endif
#ifndef INCLUDED_hx_widgets_Trackable
#include <hx/widgets/Trackable.h>
#endif
#ifndef INCLUDED_hx_widgets_Window
#include <hx/widgets/Window.h>
#endif
#ifndef INCLUDED_wx_widgets_styles_FileDialogStyle
#include <wx/widgets/styles/FileDialogStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21d6d11d3be5536d_10_new,"hx.widgets.FileDialog","new",0x7a104273,"hx.widgets.FileDialog.new","hx/widgets/FileDialog.hx",10,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_42_get_currentlySelectedFilename,"hx.widgets.FileDialog","get_currentlySelectedFilename",0x9b8d9b12,"hx.widgets.FileDialog.get_currentlySelectedFilename","hx/widgets/FileDialog.hx",42,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_48_get_directory,"hx.widgets.FileDialog","get_directory",0xeaa9ae17,"hx.widgets.FileDialog.get_directory","hx/widgets/FileDialog.hx",48,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_52_set_directory,"hx.widgets.FileDialog","set_directory",0x2faf9023,"hx.widgets.FileDialog.set_directory","hx/widgets/FileDialog.hx",52,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_59_get_filename,"hx.widgets.FileDialog","get_filename",0x0a30165d,"hx.widgets.FileDialog.get_filename","hx/widgets/FileDialog.hx",59,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_63_set_filename,"hx.widgets.FileDialog","set_filename",0x1f2939d1,"hx.widgets.FileDialog.set_filename","hx/widgets/FileDialog.hx",63,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_70_get_filenames,"hx.widgets.FileDialog","get_filenames",0xdfe37b76,"hx.widgets.FileDialog.get_filenames","hx/widgets/FileDialog.hx",70,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_81_get_filterIndex,"hx.widgets.FileDialog","get_filterIndex",0x37916a64,"hx.widgets.FileDialog.get_filterIndex","hx/widgets/FileDialog.hx",81,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_83_set_filterIndex,"hx.widgets.FileDialog","set_filterIndex",0x335ce770,"hx.widgets.FileDialog.set_filterIndex","hx/widgets/FileDialog.hx",83,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_89_get_message,"hx.widgets.FileDialog","get_message",0xde74d2f1,"hx.widgets.FileDialog.get_message","hx/widgets/FileDialog.hx",89,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_93_set_message,"hx.widgets.FileDialog","set_message",0xe8e1d9fd,"hx.widgets.FileDialog.set_message","hx/widgets/FileDialog.hx",93,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_100_get_path,"hx.widgets.FileDialog","get_path",0xcebaca3b,"hx.widgets.FileDialog.get_path","hx/widgets/FileDialog.hx",100,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_104_set_path,"hx.widgets.FileDialog","set_path",0x7d1823af,"hx.widgets.FileDialog.set_path","hx/widgets/FileDialog.hx",104,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_118_get_wildcard,"hx.widgets.FileDialog","get_wildcard",0x3bddc170,"hx.widgets.FileDialog.get_wildcard","hx/widgets/FileDialog.hx",118,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_122_set_wildcard,"hx.widgets.FileDialog","set_wildcard",0x50d6e4e4,"hx.widgets.FileDialog.set_wildcard","hx/widgets/FileDialog.hx",122,0x881aaa1b)
HX_LOCAL_STACK_FRAME(_hx_pos_21d6d11d3be5536d_135_get_fileDialogRef,"hx.widgets.FileDialog","get_fileDialogRef",0x4634f3f9,"hx.widgets.FileDialog.get_fileDialogRef","hx/widgets/FileDialog.hx",135,0x881aaa1b)
namespace hx{
namespace widgets{

void FileDialog_obj::__construct( ::hx::widgets::Window parent,::String message,::String defaultDir,::String defaultFile,::String wildcard,::hx::Null< int >  __o_style){
            		int style = __o_style.Default(0);
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_10_new)
HXLINE(  11)		if (::hx::IsNull( this->_ref )) {
HXLINE(  12)			if (::hx::IsNull( message )) {
HXLINE(  13)				message = HX_("",00,00,00,00);
            			}
HXLINE(  15)			if (::hx::IsNull( defaultDir )) {
HXLINE(  16)				defaultDir = HX_("",00,00,00,00);
            			}
HXLINE(  18)			if (::hx::IsNull( defaultFile )) {
HXLINE(  19)				defaultFile = HX_("",00,00,00,00);
            			}
HXLINE(  21)			if (::hx::IsNull( wildcard )) {
HXLINE(  22)				wildcard = HX_("",00,00,00,00);
            			}
HXLINE(  24)			if ((style == 0)) {
HXLINE(  25)				style = ::wx::widgets::styles::FileDialogStyle_obj::DEFAULT_STYLE;
            			}
HXLINE(  28)			const char* this1 = message.utf8_str();
HXDLIN(  28)			 wxString messageStr = wxString::FromUTF8(this1);
HXLINE(  29)			const char* this2 = defaultDir.utf8_str();
HXDLIN(  29)			 wxString defaultDirStr = wxString::FromUTF8(this2);
HXLINE(  30)			const char* this3 = defaultFile.utf8_str();
HXDLIN(  30)			 wxString defaultFileStr = wxString::FromUTF8(this3);
HXLINE(  31)			const char* this4 = wildcard.utf8_str();
HXDLIN(  31)			 wxString wildcardStr = wxString::FromUTF8(this4);
HXLINE(  32)			::cpp::Pointer<  wxFileDialog > _hx_tmp = ::cpp::Pointer_obj::fromRaw((new wxFileDialog(::hx::widgets::Window_obj::toRaw(parent),messageStr,defaultDirStr,defaultFileStr,wildcardStr,style)));
HXDLIN(  32)			this->_ref = _hx_tmp->reinterpret();
            		}
HXLINE(  35)		super::__construct(parent,null(),null(),null());
            	}

Dynamic FileDialog_obj::__CreateEmpty() { return new FileDialog_obj; }

void *FileDialog_obj::_hx_vtable = 0;

Dynamic FileDialog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileDialog_obj > _hx_result = new FileDialog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FileDialog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x467ba226) {
		if (inClassId<=(int)0x33607a7f) {
			if (inClassId<=(int)0x2045b63e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
			} else {
				return inClassId==(int)0x33607a7f;
			}
		} else {
			return inClassId==(int)0x3ade267e || inClassId==(int)0x467ba226;
		}
	} else {
		if (inClassId<=(int)0x5d92cb6f) {
			return inClassId==(int)0x4af00867 || inClassId==(int)0x5d92cb6f;
		} else {
			return inClassId==(int)0x6ace4963;
		}
	}
}

::String FileDialog_obj::get_currentlySelectedFilename(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_42_get_currentlySelectedFilename)
HXLINE(  43)		 wxString r = this->get_fileDialogRef()->ptr->GetCurrentlySelectedFilename();
HXLINE(  44)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_currentlySelectedFilename,return )

::String FileDialog_obj::get_directory(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_48_get_directory)
HXLINE(  49)		 wxString r = this->get_fileDialogRef()->ptr->GetDirectory();
HXLINE(  50)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_directory,return )

::String FileDialog_obj::set_directory(::String value){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_52_set_directory)
HXLINE(  53)		const char* this1 = value.utf8_str();
HXDLIN(  53)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  54)		this->get_fileDialogRef()->ptr->SetDirectory(s);
HXLINE(  55)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileDialog_obj,set_directory,return )

::String FileDialog_obj::get_filename(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_59_get_filename)
HXLINE(  60)		 wxString r = this->get_fileDialogRef()->ptr->GetFilename();
HXLINE(  61)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_filename,return )

::String FileDialog_obj::set_filename(::String value){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_63_set_filename)
HXLINE(  64)		const char* this1 = value.utf8_str();
HXDLIN(  64)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  65)		this->get_fileDialogRef()->ptr->SetFilename(s);
HXLINE(  66)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileDialog_obj,set_filename,return )

::Array< ::String > FileDialog_obj::get_filenames(){
            	HX_GC_STACKFRAME(&_hx_pos_21d6d11d3be5536d_70_get_filenames)
HXLINE(  71)		 ::hx::widgets::ArrayString wxArray =  ::hx::widgets::ArrayString_obj::__alloc( HX_CTX );
HXLINE(  72)		 wxFileDialog * _hx_tmp = this->get_fileDialogRef()->ptr;
HXDLIN(  72)		(*(_hx_tmp)).GetFilenames(wxArray->get_arraystringRef()->get_ref());
HXLINE(  73)		 ::hx::widgets::ArrayString array =  ::hx::widgets::ArrayString_obj::__alloc( HX_CTX );
HXLINE(  74)		::Array< ::String > r = wxArray->toArray();
HXLINE(  75)		wxArray->destroy();
HXLINE(  76)		return r;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_filenames,return )

int FileDialog_obj::get_filterIndex(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_81_get_filterIndex)
HXDLIN(  81)		return this->get_fileDialogRef()->ptr->GetFilterIndex();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_filterIndex,return )

int FileDialog_obj::set_filterIndex(int value){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_83_set_filterIndex)
HXLINE(  84)		this->get_fileDialogRef()->ptr->SetFilterIndex(value);
HXLINE(  85)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileDialog_obj,set_filterIndex,return )

::String FileDialog_obj::get_message(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_89_get_message)
HXLINE(  90)		 wxString r = this->get_fileDialogRef()->ptr->GetMessage();
HXLINE(  91)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_message,return )

::String FileDialog_obj::set_message(::String value){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_93_set_message)
HXLINE(  94)		const char* this1 = value.utf8_str();
HXDLIN(  94)		 wxString s = wxString::FromUTF8(this1);
HXLINE(  95)		this->get_fileDialogRef()->ptr->SetMessage(s);
HXLINE(  96)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileDialog_obj,set_message,return )

::String FileDialog_obj::get_path(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_100_get_path)
HXLINE( 101)		 wxString r = this->get_fileDialogRef()->ptr->GetPath();
HXLINE( 102)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_path,return )

::String FileDialog_obj::set_path(::String value){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_104_set_path)
HXLINE( 105)		const char* this1 = value.utf8_str();
HXDLIN( 105)		 wxString s = wxString::FromUTF8(this1);
HXLINE( 106)		this->get_fileDialogRef()->ptr->SetPath(s);
HXLINE( 107)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileDialog_obj,set_path,return )

::String FileDialog_obj::get_wildcard(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_118_get_wildcard)
HXLINE( 119)		 wxString r = this->get_fileDialogRef()->ptr->GetWildcard();
HXLINE( 120)		return ::String(::String(r.ToUTF8().data()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_wildcard,return )

::String FileDialog_obj::set_wildcard(::String value){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_122_set_wildcard)
HXLINE( 123)		const char* this1 = value.utf8_str();
HXDLIN( 123)		 wxString s = wxString::FromUTF8(this1);
HXLINE( 124)		this->get_fileDialogRef()->ptr->SetWildcard(s);
HXLINE( 125)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FileDialog_obj,set_wildcard,return )

::cpp::Pointer<  wxFileDialog > FileDialog_obj::get_fileDialogRef(){
            	HX_STACKFRAME(&_hx_pos_21d6d11d3be5536d_135_get_fileDialogRef)
HXDLIN( 135)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FileDialog_obj,get_fileDialogRef,return )


::hx::ObjectPtr< FileDialog_obj > FileDialog_obj::__new( ::hx::widgets::Window parent,::String message,::String defaultDir,::String defaultFile,::String wildcard,::hx::Null< int >  __o_style) {
	::hx::ObjectPtr< FileDialog_obj > __this = new FileDialog_obj();
	__this->__construct(parent,message,defaultDir,defaultFile,wildcard,__o_style);
	return __this;
}

::hx::ObjectPtr< FileDialog_obj > FileDialog_obj::__alloc(::hx::Ctx *_hx_ctx, ::hx::widgets::Window parent,::String message,::String defaultDir,::String defaultFile,::String wildcard,::hx::Null< int >  __o_style) {
	FileDialog_obj *__this = (FileDialog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FileDialog_obj), true, "hx.widgets.FileDialog"));
	*(void **)__this = FileDialog_obj::_hx_vtable;
	__this->__construct(parent,message,defaultDir,defaultFile,wildcard,__o_style);
	return __this;
}

FileDialog_obj::FileDialog_obj()
{
}

void FileDialog_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileDialog);
	HX_MARK_MEMBER_NAME(currentlySelectedFilename,"currentlySelectedFilename");
	HX_MARK_MEMBER_NAME(filenames,"filenames");
	HX_MARK_MEMBER_NAME(fileDialogRef,"fileDialogRef");
	 ::hx::widgets::Dialog_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FileDialog_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentlySelectedFilename,"currentlySelectedFilename");
	HX_VISIT_MEMBER_NAME(filenames,"filenames");
	HX_VISIT_MEMBER_NAME(fileDialogRef,"fileDialogRef");
	 ::hx::widgets::Dialog_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FileDialog_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_path() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_message() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"filename") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_filename() ); }
		if (HX_FIELD_EQ(inName,"get_path") ) { return ::hx::Val( get_path_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_path") ) { return ::hx::Val( set_path_dyn() ); }
		if (HX_FIELD_EQ(inName,"wildcard") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_wildcard() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_directory() ); }
		if (HX_FIELD_EQ(inName,"filenames") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_filenames() : filenames ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_filterIndex() ); }
		if (HX_FIELD_EQ(inName,"get_message") ) { return ::hx::Val( get_message_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_message") ) { return ::hx::Val( set_message_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_filename") ) { return ::hx::Val( get_filename_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filename") ) { return ::hx::Val( set_filename_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_wildcard") ) { return ::hx::Val( get_wildcard_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_wildcard") ) { return ::hx::Val( set_wildcard_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_directory") ) { return ::hx::Val( get_directory_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_directory") ) { return ::hx::Val( set_directory_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_filenames") ) { return ::hx::Val( get_filenames_dyn() ); }
		if (HX_FIELD_EQ(inName,"fileDialogRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_fileDialogRef() : fileDialogRef ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_filterIndex") ) { return ::hx::Val( get_filterIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filterIndex") ) { return ::hx::Val( set_filterIndex_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_fileDialogRef") ) { return ::hx::Val( get_fileDialogRef_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"currentlySelectedFilename") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_currentlySelectedFilename() : currentlySelectedFilename ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"get_currentlySelectedFilename") ) { return ::hx::Val( get_currentlySelectedFilename_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FileDialog_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_path(inValue.Cast< ::String >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_message(inValue.Cast< ::String >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"filename") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filename(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"wildcard") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_wildcard(inValue.Cast< ::String >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directory") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_directory(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"filenames") ) { filenames=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filterIndex(inValue.Cast< int >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fileDialogRef") ) { fileDialogRef=inValue.Cast< ::cpp::Pointer<  wxFileDialog > >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"currentlySelectedFilename") ) { currentlySelectedFilename=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileDialog_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentlySelectedFilename",68,6b,d9,a8));
	outFields->push(HX_("directory",6d,f2,44,10));
	outFields->push(HX_("filename",c7,2e,6a,77));
	outFields->push(HX_("filenames",cc,bf,7e,05));
	outFields->push(HX_("filterIndex",3a,f0,c6,6d));
	outFields->push(HX_("message",c7,35,11,9a));
	outFields->push(HX_("path",a5,e5,51,4a));
	outFields->push(HX_("wildcard",da,d9,17,a9));
	outFields->push(HX_("fileDialogRef",4f,1b,38,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FileDialog_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FileDialog_obj,currentlySelectedFilename),HX_("currentlySelectedFilename",68,6b,d9,a8)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(FileDialog_obj,filenames),HX_("filenames",cc,bf,7e,05)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxFileDialog > */ ,(int)offsetof(FileDialog_obj,fileDialogRef),HX_("fileDialogRef",4f,1b,38,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FileDialog_obj_sStaticStorageInfo = 0;
#endif

static ::String FileDialog_obj_sMemberFields[] = {
	HX_("currentlySelectedFilename",68,6b,d9,a8),
	HX_("get_currentlySelectedFilename",3f,9d,18,91),
	HX_("get_directory",44,c6,a8,d1),
	HX_("set_directory",50,a8,ae,16),
	HX_("get_filename",d0,e2,83,2c),
	HX_("set_filename",44,06,7d,41),
	HX_("filenames",cc,bf,7e,05),
	HX_("get_filenames",a3,93,e2,c6),
	HX_("get_filterIndex",d1,a7,a8,2e),
	HX_("set_filterIndex",dd,24,74,2a),
	HX_("get_message",de,95,0b,20),
	HX_("set_message",ea,9c,78,2a),
	HX_("get_path",2e,a1,0c,ca),
	HX_("set_path",a2,fa,69,78),
	HX_("get_wildcard",e3,8d,31,5e),
	HX_("set_wildcard",57,b1,2a,73),
	HX_("fileDialogRef",4f,1b,38,99),
	HX_("get_fileDialogRef",a6,26,a8,9f),
	::String(null()) };

::hx::Class FileDialog_obj::__mClass;

void FileDialog_obj::__register()
{
	FileDialog_obj _hx_dummy;
	FileDialog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.FileDialog",01,8d,a3,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileDialog_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FileDialog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileDialog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileDialog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
