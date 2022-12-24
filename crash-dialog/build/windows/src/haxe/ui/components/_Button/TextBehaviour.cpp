#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentImpl
#include <haxe/ui/backend/ComponentImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentSurface
#include <haxe/ui/backend/ComponentSurface.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Button_TextBehaviour
#include <haxe/ui/components/_Button/TextBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
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
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_styles_Style
#include <haxe/ui/styles/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4d84ef4d644c4db5_315_new,"haxe.ui.components._Button.TextBehaviour","new",0xe0f3d75f,"haxe.ui.components._Button.TextBehaviour.new","haxe/ui/components/Button.hx",315,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4d84ef4d644c4db5_316_get,"haxe.ui.components._Button.TextBehaviour","get",0xe0ee8795,"haxe.ui.components._Button.TextBehaviour.get","haxe/ui/components/Button.hx",316,0x45086125)
HX_LOCAL_STACK_FRAME(_hx_pos_4d84ef4d644c4db5_341_validateData,"haxe.ui.components._Button.TextBehaviour","validateData",0xeabff701,"haxe.ui.components._Button.TextBehaviour.validateData","haxe/ui/components/Button.hx",341,0x45086125)
namespace haxe{
namespace ui{
namespace components{
namespace _Button{

void TextBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_4d84ef4d644c4db5_315_new)
HXDLIN( 315)		super::__construct(component);
            	}

Dynamic TextBehaviour_obj::__CreateEmpty() { return new TextBehaviour_obj; }

void *TextBehaviour_obj::_hx_vtable = 0;

Dynamic TextBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextBehaviour_obj > _hx_result = new TextBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TextBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x3f44e8ef || inClassId==(int)0x7e17fa9f;
	}
}

 ::haxe::ui::util::VariantType TextBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_4d84ef4d644c4db5_316_get)
HXLINE( 317)		 ::haxe::ui::core::ItemRenderer itemRenderer = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 318)		if (::hx::IsNull( itemRenderer )) {
HXLINE( 319)			return this->super::get();
            		}
            		else {
HXLINE( 321)			if (!(this->_component->get_isReady())) {
HXLINE( 322)				return this->super::get();
            			}
            			else {
HXLINE( 324)				 ::Dynamic data = itemRenderer->get_data();
HXLINE( 325)				::String text = null();
HXLINE( 326)				if (::hx::IsNotNull( data )) {
HXLINE( 327)					if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(data),::ValueType_obj::TObject_dyn() )) {
HXLINE( 328)						text = ( (::String)(data->__Field(HX_("text",ad,cc,f9,4c),::hx::paccDynamic)) );
HXLINE( 329)						if (::hx::IsNull( text )) {
HXLINE( 330)							text = ( (::String)(data->__Field(HX_("value",71,7f,b8,31),::hx::paccDynamic)) );
            						}
            					}
            					else {
HXLINE( 333)						text = ::Std_obj::string(data);
            					}
            				}
HXLINE( 336)				return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(text);
            			}
            		}
HXLINE( 318)		return null();
            	}


void TextBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_4d84ef4d644c4db5_341_validateData)
HXLINE( 342)		 ::haxe::ui::core::ItemRenderer itemRenderer = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),null(),null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 343)		if (::hx::IsNotNull( itemRenderer )) {
HXLINE( 344)			 ::Dynamic data = itemRenderer->get_data();
HXLINE( 345)			if (::hx::IsNull( data )) {
HXLINE( 346)				data =  ::Dynamic(::hx::Anon_obj::Create(0));
            			}
            			else {
HXLINE( 348)				data = ::Reflect_obj::copy(data);
            			}
HXLINE( 350)			data->__SetField(HX_("text",ad,cc,f9,4c),::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value),::hx::paccDynamic);
HXLINE( 351)			itemRenderer->set_data(data);
            		}
            		else {
HXLINE( 353)			 ::haxe::ui::components::Label label = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Label >(),false,null()).StaticCast<  ::haxe::ui::components::Label >();
HXLINE( 354)			if (::hx::IsNull( label )) {
HXLINE( 355)				label =  ::haxe::ui::components::Label_obj::__alloc( HX_CTX );
HXLINE( 356)				label->set_id(HX_("button-label",19,ae,e7,e0));
HXLINE( 357)				label->set_scriptAccess(false);
HXLINE( 358)				this->_component->addComponent(label);
HXLINE( 359)				{
HXLINE( 359)					 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 359)					_this->invalidateComponent(HX_("style",31,a5,1d,84),false);
HXDLIN( 359)					_this->_style = null();
            				}
            			}
HXLINE( 362)			label->set_text(::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->_value));
            		}
            	}



::hx::ObjectPtr< TextBehaviour_obj > TextBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< TextBehaviour_obj > __this = new TextBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< TextBehaviour_obj > TextBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	TextBehaviour_obj *__this = (TextBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextBehaviour_obj), true, "haxe.ui.components._Button.TextBehaviour"));
	*(void **)__this = TextBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

TextBehaviour_obj::TextBehaviour_obj()
{
}

::hx::Val TextBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TextBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TextBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String TextBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class TextBehaviour_obj::__mClass;

void TextBehaviour_obj::__register()
{
	TextBehaviour_obj _hx_dummy;
	TextBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Button.TextBehaviour",ed,3b,87,58);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Button
