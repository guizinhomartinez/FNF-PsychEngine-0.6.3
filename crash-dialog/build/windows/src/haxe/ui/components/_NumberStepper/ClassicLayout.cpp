#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Button
#include <haxe/ui/components/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_components_TextField
#include <haxe/ui/components/TextField.h>
#endif
#ifndef INCLUDED_haxe_ui_components__NumberStepper_ClassicLayout
#include <haxe/ui/components/_NumberStepper/ClassicLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_Component
#include <haxe/ui/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentBounds
#include <haxe/ui/core/ComponentBounds.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentCommon
#include <haxe/ui/core/ComponentCommon.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentContainer
#include <haxe/ui/core/ComponentContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentEvents
#include <haxe/ui/core/ComponentEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentLayout
#include <haxe/ui/core/ComponentLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ComponentValidation
#include <haxe/ui/core/ComponentValidation.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Size
#include <haxe/ui/geom/Size.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_DefaultLayout
#include <haxe/ui/layouts/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4b9fb1a6cd5d334b_382_new,"haxe.ui.components._NumberStepper.ClassicLayout","new",0xb3a6c16f,"haxe.ui.components._NumberStepper.ClassicLayout.new","haxe/ui/components/NumberStepper.hx",382,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_4b9fb1a6cd5d334b_383_resizeChildren,"haxe.ui.components._NumberStepper.ClassicLayout","resizeChildren",0x1b885ea4,"haxe.ui.components._NumberStepper.ClassicLayout.resizeChildren","haxe/ui/components/NumberStepper.hx",383,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_4b9fb1a6cd5d334b_396_repositionChildren,"haxe.ui.components._NumberStepper.ClassicLayout","repositionChildren",0x783d988c,"haxe.ui.components._NumberStepper.ClassicLayout.repositionChildren","haxe/ui/components/NumberStepper.hx",396,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_4b9fb1a6cd5d334b_414_get_borderSize,"haxe.ui.components._NumberStepper.ClassicLayout","get_borderSize",0xd73ba367,"haxe.ui.components._NumberStepper.ClassicLayout.get_borderSize","haxe/ui/components/NumberStepper.hx",414,0xb723c67d)
namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{

void ClassicLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4b9fb1a6cd5d334b_382_new)
HXDLIN( 382)		super::__construct();
            	}

Dynamic ClassicLayout_obj::__CreateEmpty() { return new ClassicLayout_obj; }

void *ClassicLayout_obj::_hx_vtable = 0;

Dynamic ClassicLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClassicLayout_obj > _hx_result = new ClassicLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClassicLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x34a887db) {
		if (inClassId<=(int)0x23db4184) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x23db4184;
		} else {
			return inClassId==(int)0x34a887db;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

void ClassicLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_4b9fb1a6cd5d334b_383_resizeChildren)
HXLINE( 384)		 ::haxe::ui::components::TextField value = ( ( ::haxe::ui::components::TextField)(this->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null())) );
HXLINE( 385)		 ::haxe::ui::components::Button deinc = ( ( ::haxe::ui::components::Button)(this->findComponent(HX_("deinc",fd,9b,24,d7),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null())) );
HXLINE( 386)		 ::haxe::ui::components::Button inc = ( ( ::haxe::ui::components::Button)(this->findComponent(HX_("inc",de,0c,50,00),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null())) );
HXLINE( 388)		 ::haxe::ui::geom::Size u = this->get_usableSize();
HXLINE( 389)		 ::haxe::ui::geom::Size u1 = u;
HXDLIN( 389)		Float u2 = u1->height;
HXDLIN( 389)		u1->height = (u2 - (this->get_borderSize() * ( (Float)(2) )));
HXLINE( 391)		deinc->set_height((u->height / ( (Float)(2) )));
HXLINE( 392)		Float u3 = u->width;
HXDLIN( 392)		value->set_width((u3 - ( (Float)(deinc->get_width()) )));
HXLINE( 393)		inc->set_height((u->height / ( (Float)(2) )));
            	}


void ClassicLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_4b9fb1a6cd5d334b_396_repositionChildren)
HXLINE( 397)		 ::haxe::ui::components::TextField value = ( ( ::haxe::ui::components::TextField)(this->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null())) );
HXLINE( 398)		 ::haxe::ui::components::Button deinc = ( ( ::haxe::ui::components::Button)(this->findComponent(HX_("deinc",fd,9b,24,d7),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null())) );
HXLINE( 399)		 ::haxe::ui::components::Button inc = ( ( ::haxe::ui::components::Button)(this->findComponent(HX_("inc",de,0c,50,00),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null())) );
HXLINE( 401)		 ::haxe::ui::geom::Size u = this->get_usableSize();
HXLINE( 402)		 ::haxe::ui::geom::Size u1 = u;
HXDLIN( 402)		Float u2 = u1->height;
HXDLIN( 402)		u1->height = (u2 - (this->get_borderSize() * ( (Float)(2) )));
HXLINE( 404)		Float u3 = u->width;
HXDLIN( 404)		Float _hx_tmp = (u3 - ( (Float)(deinc->get_width()) ));
HXDLIN( 404)		Float _hx_tmp1 = (_hx_tmp - this->get_paddingRight());
HXDLIN( 404)		deinc->set_left((_hx_tmp1 - this->get_borderSize()));
HXLINE( 405)		Float u4 = u->height;
HXDLIN( 405)		Float _hx_tmp2 = (u4 - ( (Float)(inc->get_height()) ));
HXDLIN( 405)		Float _hx_tmp3 = (_hx_tmp2 - this->get_paddingBottom());
HXDLIN( 405)		Float _hx_tmp4 = (_hx_tmp3 - this->get_borderSize());
HXDLIN( 405)		Float _hx_tmp5 = (_hx_tmp4 + this->marginTop(deinc));
HXDLIN( 405)		deinc->set_top((_hx_tmp5 + (this->get_borderSize() * ( (Float)(2) ))));
HXLINE( 407)		value->set_left(this->get_paddingLeft());
HXLINE( 408)		Float _hx_tmp6 = this->get_paddingTop();
HXDLIN( 408)		value->set_top((_hx_tmp6 + this->marginTop(value)));
HXLINE( 410)		Float u5 = u->width;
HXDLIN( 410)		Float _hx_tmp7 = (u5 - ( (Float)(deinc->get_width()) ));
HXDLIN( 410)		Float _hx_tmp8 = (_hx_tmp7 - this->get_paddingRight());
HXDLIN( 410)		inc->set_left((_hx_tmp8 - this->get_borderSize()));
HXLINE( 411)		Float _hx_tmp9 = this->get_paddingTop();
HXDLIN( 411)		inc->set_top((_hx_tmp9 + this->get_borderSize()));
            	}


Float ClassicLayout_obj::get_borderSize(){
            	HX_STACKFRAME(&_hx_pos_4b9fb1a6cd5d334b_414_get_borderSize)
HXLINE( 415)		Float n = this->super::get_borderSize();
HXLINE( 416)		return n;
            	}



::hx::ObjectPtr< ClassicLayout_obj > ClassicLayout_obj::__new() {
	::hx::ObjectPtr< ClassicLayout_obj > __this = new ClassicLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ClassicLayout_obj > ClassicLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ClassicLayout_obj *__this = (ClassicLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClassicLayout_obj), true, "haxe.ui.components._NumberStepper.ClassicLayout"));
	*(void **)__this = ClassicLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ClassicLayout_obj::ClassicLayout_obj()
{
}

::hx::Val ClassicLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return ::hx::Val( resizeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_borderSize") ) { return ::hx::Val( get_borderSize_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return ::hx::Val( repositionChildren_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ClassicLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ClassicLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String ClassicLayout_obj_sMemberFields[] = {
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("get_borderSize",16,88,e3,7c),
	::String(null()) };

::hx::Class ClassicLayout_obj::__mClass;

void ClassicLayout_obj::__register()
{
	ClassicLayout_obj _hx_dummy;
	ClassicLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._NumberStepper.ClassicLayout",fd,dd,d7,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClassicLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClassicLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClassicLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClassicLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper
