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
#ifndef INCLUDED_haxe_ui_components__NumberStepper_StandardLayout
#include <haxe/ui/components/_NumberStepper/StandardLayout.h>
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
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1e445744f4cf30b8_343_new,"haxe.ui.components._NumberStepper.StandardLayout","new",0x6bf69ef8,"haxe.ui.components._NumberStepper.StandardLayout.new","haxe/ui/components/NumberStepper.hx",343,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_1e445744f4cf30b8_344_resizeChildren,"haxe.ui.components._NumberStepper.StandardLayout","resizeChildren",0xa8ad4bbb,"haxe.ui.components._NumberStepper.StandardLayout.resizeChildren","haxe/ui/components/NumberStepper.hx",344,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_1e445744f4cf30b8_356_repositionChildren,"haxe.ui.components._NumberStepper.StandardLayout","repositionChildren",0x9d145d23,"haxe.ui.components._NumberStepper.StandardLayout.repositionChildren","haxe/ui/components/NumberStepper.hx",356,0xb723c67d)
HX_LOCAL_STACK_FRAME(_hx_pos_1e445744f4cf30b8_371_get_borderSize,"haxe.ui.components._NumberStepper.StandardLayout","get_borderSize",0x6460907e,"haxe.ui.components._NumberStepper.StandardLayout.get_borderSize","haxe/ui/components/NumberStepper.hx",371,0xb723c67d)
namespace haxe{
namespace ui{
namespace components{
namespace _NumberStepper{

void StandardLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1e445744f4cf30b8_343_new)
HXDLIN( 343)		super::__construct();
            	}

Dynamic StandardLayout_obj::__CreateEmpty() { return new StandardLayout_obj; }

void *StandardLayout_obj::_hx_vtable = 0;

Dynamic StandardLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StandardLayout_obj > _hx_result = new StandardLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StandardLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23db4184) {
		if (inClassId<=(int)0x194876cc) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x194876cc;
		} else {
			return inClassId==(int)0x23db4184;
		}
	} else {
		return inClassId==(int)0x3799f835;
	}
}

void StandardLayout_obj::resizeChildren(){
            	HX_STACKFRAME(&_hx_pos_1e445744f4cf30b8_344_resizeChildren)
HXLINE( 345)		 ::haxe::ui::components::TextField value = ( ( ::haxe::ui::components::TextField)(this->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null())) );
HXLINE( 346)		 ::haxe::ui::components::Button deinc = ( ( ::haxe::ui::components::Button)(this->findComponent(HX_("deinc",fd,9b,24,d7),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null())) );
HXLINE( 347)		 ::haxe::ui::components::Button inc = ( ( ::haxe::ui::components::Button)(this->findComponent(HX_("inc",de,0c,50,00),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null())) );
HXLINE( 349)		 ::haxe::ui::geom::Size u = this->get_usableSize();
HXLINE( 351)		Float u1 = u->height;
HXDLIN( 351)		deinc->set_height((u1 - (this->get_borderSize() * ( (Float)(2) ))));
HXLINE( 352)		Float u2 = u->width;
HXDLIN( 352)		 ::Dynamic _hx_tmp = deinc->get_width();
HXDLIN( 352)		value->set_width((u2 - (_hx_tmp + inc->get_width())));
HXLINE( 353)		Float u3 = u->height;
HXDLIN( 353)		inc->set_height((u3 - (this->get_borderSize() * ( (Float)(2) ))));
            	}


void StandardLayout_obj::repositionChildren(){
            	HX_STACKFRAME(&_hx_pos_1e445744f4cf30b8_356_repositionChildren)
HXLINE( 357)		 ::haxe::ui::components::TextField value = ( ( ::haxe::ui::components::TextField)(this->findComponent(HX_("value",71,7f,b8,31),::hx::ClassOf< ::haxe::ui::components::TextField >(),null(),null())) );
HXLINE( 358)		 ::haxe::ui::components::Button deinc = ( ( ::haxe::ui::components::Button)(this->findComponent(HX_("deinc",fd,9b,24,d7),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null())) );
HXLINE( 359)		 ::haxe::ui::components::Button inc = ( ( ::haxe::ui::components::Button)(this->findComponent(HX_("inc",de,0c,50,00),::hx::ClassOf< ::haxe::ui::components::Button >(),null(),null())) );
HXLINE( 361)		Float _hx_tmp = this->get_paddingLeft();
HXDLIN( 361)		deinc->set_left((_hx_tmp + this->get_borderSize()));
HXLINE( 362)		Float _hx_tmp1 = this->get_paddingTop();
HXDLIN( 362)		deinc->set_top((_hx_tmp1 + this->get_borderSize()));
HXLINE( 364)		 ::Dynamic _hx_tmp2 = deinc->get_left();
HXDLIN( 364)		value->set_left((_hx_tmp2 + deinc->get_width()));
HXLINE( 365)		Float _hx_tmp3 = this->get_paddingTop();
HXDLIN( 365)		value->set_top((_hx_tmp3 + this->marginTop(value)));
HXLINE( 367)		 ::Dynamic _hx_tmp4 = value->get_left();
HXDLIN( 367)		Float _hx_tmp5 = (_hx_tmp4 + value->get_width());
HXDLIN( 367)		Float _hx_tmp6 = (_hx_tmp5 - this->get_borderSize());
HXDLIN( 367)		inc->set_left((_hx_tmp6 - this->get_borderSize()));
HXLINE( 368)		Float _hx_tmp7 = this->get_paddingTop();
HXDLIN( 368)		inc->set_top((_hx_tmp7 + this->get_borderSize()));
            	}


Float StandardLayout_obj::get_borderSize(){
            	HX_STACKFRAME(&_hx_pos_1e445744f4cf30b8_371_get_borderSize)
HXLINE( 372)		if (::hx::IsNull( this->_component->get_style() )) {
HXLINE( 373)			return ( (Float)(0) );
            		}
HXLINE( 376)		 ::Dynamic n = this->_component->get_style()->get_fullBorderSize();
HXLINE( 377)		return ( (Float)(n) );
            	}



::hx::ObjectPtr< StandardLayout_obj > StandardLayout_obj::__new() {
	::hx::ObjectPtr< StandardLayout_obj > __this = new StandardLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StandardLayout_obj > StandardLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StandardLayout_obj *__this = (StandardLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StandardLayout_obj), true, "haxe.ui.components._NumberStepper.StandardLayout"));
	*(void **)__this = StandardLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StandardLayout_obj::StandardLayout_obj()
{
}

::hx::Val StandardLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *StandardLayout_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StandardLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String StandardLayout_obj_sMemberFields[] = {
	HX_("resizeChildren",53,43,30,c1),
	HX_("repositionChildren",bb,00,c7,9c),
	HX_("get_borderSize",16,88,e3,7c),
	::String(null()) };

::hx::Class StandardLayout_obj::__mClass;

void StandardLayout_obj::__register()
{
	StandardLayout_obj _hx_dummy;
	StandardLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._NumberStepper.StandardLayout",06,03,16,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StandardLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StandardLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StandardLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StandardLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _NumberStepper
