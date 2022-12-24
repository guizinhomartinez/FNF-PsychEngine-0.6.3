#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2e253224f0b43858_4_new,"haxe.ui.backend.ComponentSurface","new",0x5fe46cae,"haxe.ui.backend.ComponentSurface.new","haxe/ui/backend/ComponentSurface.hx",4,0xf752b481)
namespace haxe{
namespace ui{
namespace backend{

void ComponentSurface_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2e253224f0b43858_4_new)
            	}

Dynamic ComponentSurface_obj::__CreateEmpty() { return new ComponentSurface_obj; }

void *ComponentSurface_obj::_hx_vtable = 0;

Dynamic ComponentSurface_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComponentSurface_obj > _hx_result = new ComponentSurface_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ComponentSurface_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ba87886;
}


ComponentSurface_obj::ComponentSurface_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ComponentSurface_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ComponentSurface_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ComponentSurface_obj::__mClass;

void ComponentSurface_obj::__register()
{
	ComponentSurface_obj _hx_dummy;
	ComponentSurface_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.backend.ComponentSurface",bc,3d,f1,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ComponentSurface_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComponentSurface_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComponentSurface_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace backend
