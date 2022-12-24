#include <hxcpp.h>

#ifndef INCLUDED_hx_widgets_GraphicsObject
#include <hx/widgets/GraphicsObject.h>
#endif
#ifndef INCLUDED_hx_widgets_Object
#include <hx/widgets/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_76c1ec23914dbaf3_3_new,"hx.widgets.GraphicsObject","new",0xbb729979,"hx.widgets.GraphicsObject.new","hx/widgets/GraphicsObject.hx",3,0x19db4cd5)
namespace hx{
namespace widgets{

void GraphicsObject_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_76c1ec23914dbaf3_3_new)
HXDLIN(   3)		super::__construct();
            	}

Dynamic GraphicsObject_obj::__CreateEmpty() { return new GraphicsObject_obj; }

void *GraphicsObject_obj::_hx_vtable = 0;

Dynamic GraphicsObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsObject_obj > _hx_result = new GraphicsObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GraphicsObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2045b63e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2045b63e;
	} else {
		return inClassId==(int)0x6c636469;
	}
}


::hx::ObjectPtr< GraphicsObject_obj > GraphicsObject_obj::__new() {
	::hx::ObjectPtr< GraphicsObject_obj > __this = new GraphicsObject_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GraphicsObject_obj > GraphicsObject_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GraphicsObject_obj *__this = (GraphicsObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsObject_obj), true, "hx.widgets.GraphicsObject"));
	*(void **)__this = GraphicsObject_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GraphicsObject_obj::GraphicsObject_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicsObject_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicsObject_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicsObject_obj::__mClass;

void GraphicsObject_obj::__register()
{
	GraphicsObject_obj _hx_dummy;
	GraphicsObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("hx.widgets.GraphicsObject",07,69,00,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace hx
} // end namespace widgets
