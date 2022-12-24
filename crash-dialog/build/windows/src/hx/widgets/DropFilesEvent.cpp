#include <hxcpp.h>

#ifndef INCLUDED_b8bebb965831469f
#define INCLUDED_b8bebb965831469f
#include "wx/event.h"
#endif
#ifndef INCLUDED_058190ed12c7e803
#define INCLUDED_058190ed12c7e803
#include "wx/string.h"
#endif
#ifndef INCLUDED_hx_widgets_DropFilesEvent
#include <hx/widgets/DropFilesEvent.h>
#endif
#ifndef INCLUDED_hx_widgets_Event
#include <hx/widgets/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c35c4425e9c6b673_6_new,"hx.widgets.DropFilesEvent","new",0x0adf3ec1,"hx.widgets.DropFilesEvent.new","hx/widgets/DropFilesEvent.hx",6,0xee96e88d)
HX_LOCAL_STACK_FRAME(_hx_pos_c35c4425e9c6b673_9_get_numberOfFiles,"hx.widgets.DropFilesEvent","get_numberOfFiles",0x43a2178f,"hx.widgets.DropFilesEvent.get_numberOfFiles","hx/widgets/DropFilesEvent.hx",9,0xee96e88d)
HX_LOCAL_STACK_FRAME(_hx_pos_c35c4425e9c6b673_13_get_files,"hx.widgets.DropFilesEvent","get_files",0x43b627ef,"hx.widgets.DropFilesEvent.get_files","hx/widgets/DropFilesEvent.hx",13,0xee96e88d)
HX_LOCAL_STACK_FRAME(_hx_pos_c35c4425e9c6b673_28_get_dropFilesEventRef,"hx.widgets.DropFilesEvent","get_dropFilesEventRef",0xd297c2b9,"hx.widgets.DropFilesEvent.get_dropFilesEventRef","hx/widgets/DropFilesEvent.hx",28,0xee96e88d)
namespace hx{
namespace widgets{

void DropFilesEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c35c4425e9c6b673_6_new)
HXDLIN(   6)		super::__construct();
            	}

Dynamic DropFilesEvent_obj::__CreateEmpty() { return new DropFilesEvent_obj; }

void *DropFilesEvent_obj::_hx_vtable = 0;

Dynamic DropFilesEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DropFilesEvent_obj > _hx_result = new DropFilesEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DropFilesEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0aa66105) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0aa66105;
	} else {
		return inClassId==(int)0x4f345a43;
	}
}

int DropFilesEvent_obj::get_numberOfFiles(){
            	HX_STACKFRAME(&_hx_pos_c35c4425e9c6b673_9_get_numberOfFiles)
HXDLIN(   9)		return this->get_dropFilesEventRef()->ptr->GetNumberOfFiles();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropFilesEvent_obj,get_numberOfFiles,return )

::Array< ::String > DropFilesEvent_obj::get_files(){
            	HX_STACKFRAME(&_hx_pos_c35c4425e9c6b673_13_get_files)
HXLINE(  14)		::Array< ::String > f = ::Array_obj< ::String >::__new(0);
HXLINE(  15)		const  wxString* nativeArray = this->get_dropFilesEventRef()->ptr->GetFiles();
HXLINE(  16)		{
HXLINE(  16)			int _g = 0;
HXDLIN(  16)			int _g1 = this->get_numberOfFiles();
HXDLIN(  16)			while((_g < _g1)){
HXLINE(  16)				_g = (_g + 1);
HXDLIN(  16)				int i = (_g - 1);
HXLINE(  17)				::String s = ::String(::String(nativeArray[i].ToUTF8().data()));
HXLINE(  18)				f->push(s);
            			}
            		}
HXLINE(  20)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropFilesEvent_obj,get_files,return )

::cpp::Pointer<  wxDropFilesEvent > DropFilesEvent_obj::get_dropFilesEventRef(){
            	HX_STACKFRAME(&_hx_pos_c35c4425e9c6b673_28_get_dropFilesEventRef)
HXDLIN(  28)		return this->_ref->reinterpret();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropFilesEvent_obj,get_dropFilesEventRef,return )


::hx::ObjectPtr< DropFilesEvent_obj > DropFilesEvent_obj::__new() {
	::hx::ObjectPtr< DropFilesEvent_obj > __this = new DropFilesEvent_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DropFilesEvent_obj > DropFilesEvent_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DropFilesEvent_obj *__this = (DropFilesEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DropFilesEvent_obj), true, "hx.widgets.DropFilesEvent"));
	*(void **)__this = DropFilesEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DropFilesEvent_obj::DropFilesEvent_obj()
{
}

void DropFilesEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DropFilesEvent);
	HX_MARK_MEMBER_NAME(numberOfFiles,"numberOfFiles");
	HX_MARK_MEMBER_NAME(files,"files");
	HX_MARK_MEMBER_NAME(dropFilesEventRef,"dropFilesEventRef");
	 ::hx::widgets::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DropFilesEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numberOfFiles,"numberOfFiles");
	HX_VISIT_MEMBER_NAME(files,"files");
	HX_VISIT_MEMBER_NAME(dropFilesEventRef,"dropFilesEventRef");
	 ::hx::widgets::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DropFilesEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"files") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_files() : files ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_files") ) { return ::hx::Val( get_files_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numberOfFiles") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_numberOfFiles() : numberOfFiles ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_numberOfFiles") ) { return ::hx::Val( get_numberOfFiles_dyn() ); }
		if (HX_FIELD_EQ(inName,"dropFilesEventRef") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_dropFilesEventRef() : dropFilesEventRef ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_dropFilesEventRef") ) { return ::hx::Val( get_dropFilesEventRef_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DropFilesEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"files") ) { files=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numberOfFiles") ) { numberOfFiles=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dropFilesEventRef") ) { dropFilesEventRef=inValue.Cast< ::cpp::Pointer<  wxDropFilesEvent > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DropFilesEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("numberOfFiles",17,96,6a,63));
	outFields->push(HX_("files",77,de,98,00));
	outFields->push(HX_("dropFilesEventRef",41,25,f6,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DropFilesEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(DropFilesEvent_obj,numberOfFiles),HX_("numberOfFiles",17,96,6a,63)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DropFilesEvent_obj,files),HX_("files",77,de,98,00)},
	{::hx::fsUnknown /* ::cpp::Pointer<  wxDropFilesEvent > */ ,(int)offsetof(DropFilesEvent_obj,dropFilesEventRef),HX_("dropFilesEventRef",41,25,f6,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DropFilesEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String DropFilesEvent_obj_sMemberFields[] = {
	HX_("numberOfFiles",17,96,6a,63),
	HX_("get_numberOfFiles",6e,a1,da,69),
	HX_("files",77,de,98,00),
	HX_("get_files",ce,3a,42,44),
	HX_("dropFilesEventRef",41,25,f6,41),
	HX_("get_dropFilesEventRef",18,28,a4,c0),
	::String(null()) };

::hx::Class DropFilesEvent_obj::__mClass;

void DropFilesEvent_obj::__register()
{
	DropFilesEvent_obj _hx_dummy;
	DropFilesEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.DropFilesEvent",4f,ca,4e,bf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DropFilesEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DropFilesEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropFilesEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropFilesEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
