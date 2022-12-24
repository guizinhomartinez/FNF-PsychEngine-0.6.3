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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviour
#include <haxe/ui/behaviours/Behaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_Behaviours
#include <haxe/ui/behaviours/Behaviours.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_DefaultBehaviour
#include <haxe/ui/behaviours/DefaultBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_InvalidatingBehaviour
#include <haxe/ui/behaviours/InvalidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Image_Builder
#include <haxe/ui/components/_Image/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Image_ImageLayout
#include <haxe/ui/components/_Image/ImageLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Image_ResourceBehaviour
#include <haxe/ui/components/_Image/ResourceBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_CompositeBuilder
#include <haxe/ui/core/CompositeBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5c9a4b3a63d1e052_25_new,"haxe.ui.components.Image","new",0x6d018867,"haxe.ui.components.Image.new","haxe/ui/components/Image.hx",25,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_138_registerComposite,"haxe.ui.components.Image","registerComposite",0x4da0fb6b,"haxe.ui.components.Image.registerComposite","haxe/ui/macros/Macros.hx",138,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_441_registerBehaviours,"haxe.ui.components.Image","registerBehaviours",0x223a0fb2,"haxe.ui.components.Image.registerBehaviours","haxe/ui/macros/Macros.hx",441,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_475_get_resource,"haxe.ui.components.Image","get_resource",0xa59e9ff0,"haxe.ui.components.Image.get_resource","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_491_set_resource,"haxe.ui.components.Image","set_resource",0xba97c364,"haxe.ui.components.Image.set_resource","haxe/ui/macros/Macros.hx",491,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_475_get_scaleMode,"haxe.ui.components.Image","get_scaleMode",0x375055ab,"haxe.ui.components.Image.get_scaleMode","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_520_set_scaleMode,"haxe.ui.components.Image","set_scaleMode",0x7c5637b7,"haxe.ui.components.Image.set_scaleMode","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_475_get_imageHorizontalAlign,"haxe.ui.components.Image","get_imageHorizontalAlign",0x752b6448,"haxe.ui.components.Image.get_imageHorizontalAlign","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_520_set_imageHorizontalAlign,"haxe.ui.components.Image","set_imageHorizontalAlign",0x8805e5bc,"haxe.ui.components.Image.set_imageHorizontalAlign","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_475_get_imageVerticalAlign,"haxe.ui.components.Image","get_imageVerticalAlign",0x8232d3b6,"haxe.ui.components.Image.get_imageVerticalAlign","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_520_set_imageVerticalAlign,"haxe.ui.components.Image","set_imageVerticalAlign",0xb5de502a,"haxe.ui.components.Image.set_imageVerticalAlign","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_475_get_originalWidth,"haxe.ui.components.Image","get_originalWidth",0x7ae4cd93,"haxe.ui.components.Image.get_originalWidth","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_520_set_originalWidth,"haxe.ui.components.Image","set_originalWidth",0x9e52a59f,"haxe.ui.components.Image.set_originalWidth","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_475_get_originalHeight,"haxe.ui.components.Image","get_originalHeight",0xc39e8bba,"haxe.ui.components.Image.get_originalHeight","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_520_set_originalHeight,"haxe.ui.components.Image","set_originalHeight",0xa04dbe2e,"haxe.ui.components.Image.set_originalHeight","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_475_get_imageScale,"haxe.ui.components.Image","get_imageScale",0x860b64d1,"haxe.ui.components.Image.get_imageScale","haxe/ui/macros/Macros.hx",475,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_520_set_imageScale,"haxe.ui.components.Image","set_imageScale",0xa62b4d45,"haxe.ui.components.Image.set_imageScale","haxe/ui/macros/Macros.hx",520,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_593_get_value,"haxe.ui.components.Image","get_value",0xb23fd30f,"haxe.ui.components.Image.get_value","haxe/ui/macros/Macros.hx",593,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_596_set_value,"haxe.ui.components.Image","set_value",0x9590bf1b,"haxe.ui.components.Image.set_value","haxe/ui/macros/Macros.hx",596,0x27866361)
HX_LOCAL_STACK_FRAME(_hx_pos_70a92e84e264cfc6_565_cloneComponent,"haxe.ui.components.Image","cloneComponent",0xb1d030f9,"haxe.ui.components.Image.cloneComponent","haxe/ui/macros/helpers/ClassBuilder.hx",565,0x8cdaad7b)
HX_LOCAL_STACK_FRAME(_hx_pos_acf5dfbc98b483db_423_self,"haxe.ui.components.Image","self",0xf7a3d9a5,"haxe.ui.components.Image.self","haxe/ui/macros/Macros.hx",423,0x27866361)
namespace haxe{
namespace ui{
namespace components{

void Image_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5c9a4b3a63d1e052_25_new)
HXDLIN(  25)		super::__construct();
            	}

Dynamic Image_obj::__CreateEmpty() { return new Image_obj; }

void *Image_obj::_hx_vtable = 0;

Dynamic Image_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Image_obj > _hx_result = new Image_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Image_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x241b0321) {
		if (inClassId<=(int)0x0f2dd418) {
			if (inClassId<=(int)0x084a77ff) {
				if (inClassId<=(int)0x01557b4b) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x01557b4b;
				} else {
					return inClassId==(int)0x084a77ff;
				}
			} else {
				return inClassId==(int)0x0f2dd418;
			}
		} else {
			if (inClassId<=(int)0x13d76ae7) {
				return inClassId==(int)0x1395e371 || inClassId==(int)0x13d76ae7;
			} else {
				return inClassId==(int)0x241b0321;
			}
		}
	} else {
		if (inClassId<=(int)0x715d6dae) {
			if (inClassId<=(int)0x4ba87886) {
				return inClassId==(int)0x2ccba775 || inClassId==(int)0x4ba87886;
			} else {
				return inClassId==(int)0x715d6dae;
			}
		} else {
			return inClassId==(int)0x72c347e4 || inClassId==(int)0x7ec24579;
		}
	}
}

void Image_obj::registerComposite(){
            	HX_STACKFRAME(&_hx_pos_acf5dfbc98b483db_138_registerComposite)
HXLINE( 139)		this->super::registerComposite();
HXLINE( 155)		this->_defaultLayoutClass = ::hx::ClassOf< ::haxe::ui::components::_Image::ImageLayout >();
HXLINE( 151)		this->_compositeBuilderClass = ::hx::ClassOf< ::haxe::ui::components::_Image::Builder >();
            	}


void Image_obj::registerBehaviours(){
            	HX_STACKFRAME(&_hx_pos_acf5dfbc98b483db_441_registerBehaviours)
HXLINE( 442)		this->super::registerBehaviours();
HXLINE( 539)		this->behaviours->_hx_register(HX_("resource",ce,5c,a0,12),::hx::ClassOf< ::haxe::ui::components::_Image::ResourceBehaviour >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 543)		_hx_tmp->_hx_register(HX_("scaleMode",0d,db,d3,2b),::hx::ClassOf< ::haxe::ui::behaviours::InvalidatingBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("fill",83,ce,bb,43)));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp1 = this->behaviours;
HXDLIN( 543)		_hx_tmp1->_hx_register(HX_("imageHorizontalAlign",26,f6,c3,b8),::hx::ClassOf< ::haxe::ui::behaviours::InvalidatingBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("center",d5,25,db,05)));
HXDLIN( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp2 = this->behaviours;
HXDLIN( 543)		_hx_tmp2->_hx_register(HX_("imageVerticalAlign",14,92,18,b2),::hx::ClassOf< ::haxe::ui::behaviours::InvalidatingBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(HX_("center",d5,25,db,05)));
HXLINE( 539)		this->behaviours->_hx_register(HX_("originalWidth",f5,ab,53,25),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXDLIN( 539)		this->behaviours->_hx_register(HX_("originalHeight",18,43,32,3a),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),null());
HXLINE( 543)		 ::haxe::ui::behaviours::Behaviours _hx_tmp3 = this->behaviours;
HXDLIN( 543)		_hx_tmp3->_hx_register(HX_("imageScale",2f,95,9c,84),::hx::ClassOf< ::haxe::ui::behaviours::DefaultBehaviour >(),::haxe::ui::util::_Variant::Variant_Impl__obj::fromInt(1));
            	}


 ::haxe::ui::util::VariantType Image_obj::get_resource(){
            	HX_STACKFRAME(&_hx_pos_acf5dfbc98b483db_475_get_resource)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return this->behaviours->get(HX_("resource",ce,5c,a0,12));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_resource,return )

 ::haxe::ui::util::VariantType Image_obj::set_resource( ::haxe::ui::util::VariantType value){
            	HX_GC_STACKFRAME(&_hx_pos_acf5dfbc98b483db_491_set_resource)
HXLINE( 492)		this->behaviours->set(HX_("resource",ce,5c,a0,12),value);
HXLINE( 493)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("resource",ce,5c,a0,12)));
HXLINE( 494)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_resource,return )

::String Image_obj::get_scaleMode(){
            	HX_STACKFRAME(&_hx_pos_acf5dfbc98b483db_475_get_scaleMode)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("scaleMode",0d,db,d3,2b)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_scaleMode,return )

::String Image_obj::set_scaleMode(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_acf5dfbc98b483db_520_set_scaleMode)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("scaleMode",0d,db,d3,2b),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("scaleMode",0d,db,d3,2b)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_scaleMode,return )

::String Image_obj::get_imageHorizontalAlign(){
            	HX_STACKFRAME(&_hx_pos_acf5dfbc98b483db_475_get_imageHorizontalAlign)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("imageHorizontalAlign",26,f6,c3,b8)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_imageHorizontalAlign,return )

::String Image_obj::set_imageHorizontalAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_acf5dfbc98b483db_520_set_imageHorizontalAlign)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("imageHorizontalAlign",26,f6,c3,b8),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("imageHorizontalAlign",26,f6,c3,b8)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_imageHorizontalAlign,return )

::String Image_obj::get_imageVerticalAlign(){
            	HX_STACKFRAME(&_hx_pos_acf5dfbc98b483db_475_get_imageVerticalAlign)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return null();
            		}
HXLINE( 479)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toString(this->behaviours->get(HX_("imageVerticalAlign",14,92,18,b2)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_imageVerticalAlign,return )

::String Image_obj::set_imageVerticalAlign(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_acf5dfbc98b483db_520_set_imageVerticalAlign)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("imageVerticalAlign",14,92,18,b2),::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("imageVerticalAlign",14,92,18,b2)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_imageVerticalAlign,return )

Float Image_obj::get_originalWidth(){
            	HX_STACKFRAME(&_hx_pos_acf5dfbc98b483db_475_get_originalWidth)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("originalWidth",f5,ab,53,25)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_originalWidth,return )

Float Image_obj::set_originalWidth(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_acf5dfbc98b483db_520_set_originalWidth)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("originalWidth",f5,ab,53,25),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("originalWidth",f5,ab,53,25)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_originalWidth,return )

Float Image_obj::get_originalHeight(){
            	HX_STACKFRAME(&_hx_pos_acf5dfbc98b483db_475_get_originalHeight)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("originalHeight",18,43,32,3a)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_originalHeight,return )

Float Image_obj::set_originalHeight(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_acf5dfbc98b483db_520_set_originalHeight)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("originalHeight",18,43,32,3a),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("originalHeight",18,43,32,3a)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_originalHeight,return )

Float Image_obj::get_imageScale(){
            	HX_STACKFRAME(&_hx_pos_acf5dfbc98b483db_475_get_imageScale)
HXLINE( 476)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 477)			return ( (Float)(0) );
            		}
HXLINE( 479)		return ( (Float)(::haxe::ui::util::_Variant::Variant_Impl__obj::toFloat(this->behaviours->get(HX_("imageScale",2f,95,9c,84)))) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_imageScale,return )

Float Image_obj::set_imageScale(Float value){
            	HX_GC_STACKFRAME(&_hx_pos_acf5dfbc98b483db_520_set_imageScale)
HXLINE( 521)		if (::hx::IsNull( this->behaviours )) {
HXLINE( 522)			return value;
            		}
HXLINE( 524)		 ::haxe::ui::behaviours::Behaviours _hx_tmp = this->behaviours;
HXDLIN( 524)		_hx_tmp->set(HX_("imageScale",2f,95,9c,84),::haxe::ui::util::_Variant::Variant_Impl__obj::fromFloat(value));
HXLINE( 525)		this->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),null(),HX_("imageScale",2f,95,9c,84)));
HXLINE( 526)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_imageScale,return )

 ::Dynamic Image_obj::get_value(){
            	HX_STACKFRAME(&_hx_pos_acf5dfbc98b483db_593_get_value)
HXDLIN( 593)		return ::haxe::ui::util::_Variant::Variant_Impl__obj::toDynamic(this->get_resource());
            	}


 ::Dynamic Image_obj::set_value( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_acf5dfbc98b483db_596_set_value)
HXLINE( 597)		this->set_resource(::haxe::ui::util::_Variant::Variant_Impl__obj::fromDynamic(value));
HXLINE( 598)		return value;
            	}


 ::haxe::ui::core::ComponentContainer Image_obj::cloneComponent(){
            	HX_STACKFRAME(&_hx_pos_70a92e84e264cfc6_565_cloneComponent)
HXLINE( 371)		 ::haxe::ui::components::Image c = ( ( ::haxe::ui::components::Image)(this->super::cloneComponent()) );
HXLINE( 380)		if (::hx::IsNotNull( this->get_resource() )) {
HXLINE( 380)			c->set_resource(this->get_resource());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_scaleMode() )) {
HXLINE( 380)			c->set_scaleMode(this->get_scaleMode());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_imageHorizontalAlign() )) {
HXLINE( 380)			c->set_imageHorizontalAlign(this->get_imageHorizontalAlign());
            		}
HXDLIN( 380)		if (::hx::IsNotNull( this->get_imageVerticalAlign() )) {
HXLINE( 380)			c->set_imageVerticalAlign(this->get_imageVerticalAlign());
            		}
HXLINE( 382)		c->set_originalWidth(this->get_originalWidth());
HXDLIN( 382)		c->set_originalHeight(this->get_originalHeight());
HXDLIN( 382)		c->set_imageScale(this->get_imageScale());
HXLINE( 386)		{
HXLINE( 387)			::Array< ::Dynamic> _hx_tmp;
HXDLIN( 387)			if (::hx::IsNull( this->_children )) {
HXLINE( 387)				_hx_tmp = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp = this->_children;
            			}
HXDLIN( 387)			::Array< ::Dynamic> _hx_tmp1;
HXDLIN( 387)			if (::hx::IsNull( c->_children )) {
HXLINE( 387)				_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 387)				_hx_tmp1 = c->_children;
            			}
HXDLIN( 387)			if ((_hx_tmp->length != _hx_tmp1->length)) {
HXLINE( 388)				int _g = 0;
HXDLIN( 388)				::Array< ::Dynamic> _g1;
HXDLIN( 388)				if (::hx::IsNull( this->_children )) {
HXLINE( 388)					_g1 = ::Array_obj< ::Dynamic>::__new(0);
            				}
            				else {
HXLINE( 388)					_g1 = this->_children;
            				}
HXDLIN( 388)				while((_g < _g1->length)){
HXLINE( 388)					 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 388)					_g = (_g + 1);
HXLINE( 389)					c->addComponent(Dynamic( child->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >());
            				}
            			}
HXLINE( 393)			this->postCloneComponent(( ( ::haxe::ui::core::Component)(c) ));
            		}
HXLINE( 395)		return c;
            	}


 ::haxe::ui::core::ComponentContainer Image_obj::self(){
            	HX_GC_STACKFRAME(&_hx_pos_acf5dfbc98b483db_423_self)
HXDLIN( 423)		return  ::haxe::ui::components::Image_obj::__alloc( HX_CTX );
            	}



::hx::ObjectPtr< Image_obj > Image_obj::__new() {
	::hx::ObjectPtr< Image_obj > __this = new Image_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Image_obj > Image_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Image_obj *__this = (Image_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Image_obj), true, "haxe.ui.components.Image"));
	*(void **)__this = Image_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Image_obj::Image_obj()
{
}

::hx::Val Image_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return ::hx::Val( self_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_resource() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_scaleMode() ); }
		if (HX_FIELD_EQ(inName,"get_value") ) { return ::hx::Val( get_value_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return ::hx::Val( set_value_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageScale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageScale() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_resource") ) { return ::hx::Val( get_resource_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_resource") ) { return ::hx::Val( set_resource_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_scaleMode") ) { return ::hx::Val( get_scaleMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleMode") ) { return ::hx::Val( set_scaleMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"originalWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_originalWidth() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_originalHeight() ); }
		if (HX_FIELD_EQ(inName,"get_imageScale") ) { return ::hx::Val( get_imageScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_imageScale") ) { return ::hx::Val( set_imageScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"cloneComponent") ) { return ::hx::Val( cloneComponent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"registerComposite") ) { return ::hx::Val( registerComposite_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_originalWidth") ) { return ::hx::Val( get_originalWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_originalWidth") ) { return ::hx::Val( set_originalWidth_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerBehaviours") ) { return ::hx::Val( registerBehaviours_dyn() ); }
		if (HX_FIELD_EQ(inName,"imageVerticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageVerticalAlign() ); }
		if (HX_FIELD_EQ(inName,"get_originalHeight") ) { return ::hx::Val( get_originalHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_originalHeight") ) { return ::hx::Val( set_originalHeight_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"imageHorizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_imageHorizontalAlign() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_imageVerticalAlign") ) { return ::hx::Val( get_imageVerticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_imageVerticalAlign") ) { return ::hx::Val( set_imageVerticalAlign_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_imageHorizontalAlign") ) { return ::hx::Val( get_imageHorizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_imageHorizontalAlign") ) { return ::hx::Val( set_imageHorizontalAlign_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Image_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"resource") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_resource(inValue.Cast<  ::haxe::ui::util::VariantType >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleMode(inValue.Cast< ::String >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imageScale") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_imageScale(inValue.Cast< Float >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"originalWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_originalWidth(inValue.Cast< Float >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"originalHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_originalHeight(inValue.Cast< Float >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"imageVerticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_imageVerticalAlign(inValue.Cast< ::String >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"imageHorizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_imageHorizontalAlign(inValue.Cast< ::String >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("resource",ce,5c,a0,12));
	outFields->push(HX_("scaleMode",0d,db,d3,2b));
	outFields->push(HX_("imageHorizontalAlign",26,f6,c3,b8));
	outFields->push(HX_("imageVerticalAlign",14,92,18,b2));
	outFields->push(HX_("originalWidth",f5,ab,53,25));
	outFields->push(HX_("originalHeight",18,43,32,3a));
	outFields->push(HX_("imageScale",2f,95,9c,84));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Image_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Image_obj_sStaticStorageInfo = 0;
#endif

static ::String Image_obj_sMemberFields[] = {
	HX_("registerComposite",24,e5,7f,fe),
	HX_("registerBehaviours",d9,a7,67,34),
	HX_("get_resource",d7,10,ba,c7),
	HX_("set_resource",4b,34,b3,dc),
	HX_("get_scaleMode",e4,ae,37,ed),
	HX_("set_scaleMode",f0,90,3d,32),
	HX_("get_imageHorizontalAlign",af,13,60,fb),
	HX_("set_imageHorizontalAlign",23,95,3a,0e),
	HX_("get_imageVerticalAlign",5d,0b,ad,0b),
	HX_("set_imageVerticalAlign",d1,87,58,3f),
	HX_("get_originalWidth",4c,b7,c3,2b),
	HX_("set_originalWidth",58,8f,31,4f),
	HX_("get_originalHeight",e1,23,cc,d5),
	HX_("set_originalHeight",55,56,7b,b2),
	HX_("get_imageScale",78,1d,92,fa),
	HX_("set_imageScale",ec,05,b2,1a),
	HX_("get_value",c8,db,61,75),
	HX_("set_value",d4,c7,b2,58),
	HX_("cloneComponent",a0,e9,56,26),
	HX_("self",8c,8b,50,4c),
	::String(null()) };

::hx::Class Image_obj::__mClass;

void Image_obj::__register()
{
	Image_obj _hx_dummy;
	Image_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components.Image",f5,c8,95,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Image_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Image_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Image_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Image_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
