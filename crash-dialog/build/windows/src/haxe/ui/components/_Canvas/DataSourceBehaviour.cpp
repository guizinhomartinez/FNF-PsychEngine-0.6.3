#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentBase
#include <haxe/ui/backend/ComponentBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsBase
#include <haxe/ui/backend/ComponentGraphicsBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ComponentGraphicsImpl
#include <haxe/ui/backend/ComponentGraphicsImpl.h>
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
#ifndef INCLUDED_haxe_ui_components_Canvas
#include <haxe/ui/components/Canvas.h>
#endif
#ifndef INCLUDED_haxe_ui_components__Canvas_DataSourceBehaviour
#include <haxe/ui/components/_Canvas/DataSourceBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_graphics_ComponentGraphics
#include <haxe/ui/graphics/ComponentGraphics.h>
#endif
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Color_Color_Impl_
#include <haxe/ui/util/_Color/Color_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3e8e135d88b58d88_40_new,"haxe.ui.components._Canvas.DataSourceBehaviour","new",0xbba69b0d,"haxe.ui.components._Canvas.DataSourceBehaviour.new","haxe/ui/components/Canvas.hx",40,0x66f0c1ff)
HX_LOCAL_STACK_FRAME(_hx_pos_3e8e135d88b58d88_46_validateData,"haxe.ui.components._Canvas.DataSourceBehaviour","validateData",0x95ba4d93,"haxe.ui.components._Canvas.DataSourceBehaviour.validateData","haxe/ui/components/Canvas.hx",46,0x66f0c1ff)
namespace haxe{
namespace ui{
namespace components{
namespace _Canvas{

void DataSourceBehaviour_obj::__construct( ::haxe::ui::components::Canvas canvas){
            	HX_STACKFRAME(&_hx_pos_3e8e135d88b58d88_40_new)
HXLINE(  41)		super::__construct(canvas);
HXLINE(  42)		this->_canvas = canvas;
            	}

Dynamic DataSourceBehaviour_obj::__CreateEmpty() { return new DataSourceBehaviour_obj; }

void *DataSourceBehaviour_obj::_hx_vtable = 0;

Dynamic DataSourceBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DataSourceBehaviour_obj > _hx_result = new DataSourceBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DataSourceBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x60ce0091 || inClassId==(int)0x7e17fa9f;
	}
}

void DataSourceBehaviour_obj::validateData(){
            	HX_STACKFRAME(&_hx_pos_3e8e135d88b58d88_46_validateData)
HXDLIN(  46)		if (::hx::IsNotNull( this->_value )) {
HXLINE(  47)			 ::haxe::ui::data::DataSource ds = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->_value);
HXLINE(  48)			 ::haxe::ui::graphics::ComponentGraphics g = this->_canvas->componentGraphics;
HXLINE(  49)			{
HXLINE(  49)				int _g = 0;
HXDLIN(  49)				int _g1 = ds->get_size();
HXDLIN(  49)				while((_g < _g1)){
HXLINE(  49)					_g = (_g + 1);
HXDLIN(  49)					int i = (_g - 1);
HXLINE(  50)					 ::Dynamic item = ds->get(i);
HXLINE(  51)					 ::Dynamic _hx_switch_0 =  ::Dynamic(item->__Field(HX_("id",db,5b,00,00),::hx::paccDynamic));
            					if (  (_hx_switch_0==HX_("circle",10,72,0d,56)) ){
HXLINE(  77)						 ::Dynamic x = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE(  78)						 ::Dynamic y = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
HXLINE(  79)						 ::Dynamic radius = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("radius",52,d0,f6,b0),::hx::paccDynamic)) ));
HXLINE(  80)						g->circle(( (Float)(x) ),( (Float)(y) ),( (Float)(radius) ));
HXLINE(  76)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==HX_("clear",8d,71,5b,48)) ){
HXLINE(  53)						g->clear();
HXDLIN(  53)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==HX_("fill-style",a7,f4,32,51)) ||  (_hx_switch_0==HX_("fillStyle",ae,cb,c4,52)) ){
HXLINE(  60)						::String color = ( (::String)(item->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic)) );
HXLINE(  61)						 ::Dynamic alpha;
HXDLIN(  61)						if (::hx::IsNotNull( item->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic) )) {
HXLINE(  61)							alpha = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic)) ));
            						}
            						else {
HXLINE(  61)							alpha = 1;
            						}
HXLINE(  62)						g->fillStyle(::haxe::ui::util::_Color::Color_Impl__obj::fromString(color),alpha);
HXLINE(  59)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==HX_("image",5b,1f,69,bd)) ){
HXLINE(  70)						::String resource = ( (::String)(item->__Field(HX_("resource",ce,5c,a0,12),::hx::paccDynamic)) );
HXLINE(  71)						 ::Dynamic x = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
HXLINE(  72)						 ::Dynamic y = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
HXLINE(  73)						 ::Dynamic width = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ));
HXLINE(  74)						 ::Dynamic height = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ));
HXLINE(  75)						g->image(::haxe::ui::util::_Variant::Variant_Impl__obj::fromString(resource),x,y,width,height);
HXLINE(  69)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==HX_("rectangle",2f,d4,7c,19)) ){
HXLINE(  64)						 ::Dynamic x;
HXDLIN(  64)						if (::hx::IsNotNull( item->__Field(HX_("x",78,00,00,00),::hx::paccDynamic) )) {
HXLINE(  64)							x = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("x",78,00,00,00),::hx::paccDynamic)) ));
            						}
            						else {
HXLINE(  64)							x = 0;
            						}
HXLINE(  65)						 ::Dynamic y;
HXDLIN(  65)						if (::hx::IsNotNull( item->__Field(HX_("y",79,00,00,00),::hx::paccDynamic) )) {
HXLINE(  65)							y = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("y",79,00,00,00),::hx::paccDynamic)) ));
            						}
            						else {
HXLINE(  65)							y = 0;
            						}
HXLINE(  66)						 ::Dynamic width;
HXDLIN(  66)						if (::hx::IsNotNull( item->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic) )) {
HXLINE(  66)							width = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ));
            						}
            						else {
HXLINE(  66)							width = this->_canvas->get_width();
            						}
HXLINE(  67)						 ::Dynamic height;
HXDLIN(  67)						if (::hx::IsNotNull( item->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic) )) {
HXLINE(  67)							height = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ));
            						}
            						else {
HXLINE(  67)							height = this->_canvas->get_height();
            						}
HXLINE(  68)						g->rectangle(( (Float)(x) ),( (Float)(y) ),( (Float)(width) ),( (Float)(height) ));
HXLINE(  63)						goto _hx_goto_2;
            					}
            					if (  (_hx_switch_0==HX_("stroke-style",9c,2f,d7,d7)) ||  (_hx_switch_0==HX_("strokeStyle",59,e6,d7,9c)) ){
HXLINE(  55)						::String color = ( (::String)(item->__Field(HX_("color",63,71,5c,4a),::hx::paccDynamic)) );
HXLINE(  56)						 ::Dynamic thickness;
HXDLIN(  56)						if (::hx::IsNotNull( item->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic) )) {
HXLINE(  56)							thickness = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("thickness",74,f1,66,5a),::hx::paccDynamic)) ));
            						}
            						else {
HXLINE(  56)							thickness = 1;
            						}
HXLINE(  57)						 ::Dynamic alpha;
HXDLIN(  57)						if (::hx::IsNotNull( item->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic) )) {
HXLINE(  57)							alpha = ::Std_obj::parseFloat(( (::String)(item->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic)) ));
            						}
            						else {
HXLINE(  57)							alpha = 1;
            						}
HXLINE(  58)						g->strokeStyle(::haxe::ui::util::_Color::Color_Impl__obj::fromString(color),thickness,alpha);
HXLINE(  54)						goto _hx_goto_2;
            					}
            					/* default */{
HXLINE(  82)						 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  82)						::String _hx_tmp1 = (HX_("unrecognised draw command: ",4d,f4,31,b6) + ::Std_obj::string(item));
HXDLIN(  82)						_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("haxe/ui/components/Canvas.hx",ff,c1,f0,66),82,HX_("haxe.ui.components._Canvas.DataSourceBehaviour",9b,10,07,65),HX_("validateData",e0,55,63,96)));
            					}
            					_hx_goto_2:;
            				}
            			}
            		}
            	}



::hx::ObjectPtr< DataSourceBehaviour_obj > DataSourceBehaviour_obj::__new( ::haxe::ui::components::Canvas canvas) {
	::hx::ObjectPtr< DataSourceBehaviour_obj > __this = new DataSourceBehaviour_obj();
	__this->__construct(canvas);
	return __this;
}

::hx::ObjectPtr< DataSourceBehaviour_obj > DataSourceBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::components::Canvas canvas) {
	DataSourceBehaviour_obj *__this = (DataSourceBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataSourceBehaviour_obj), true, "haxe.ui.components._Canvas.DataSourceBehaviour"));
	*(void **)__this = DataSourceBehaviour_obj::_hx_vtable;
	__this->__construct(canvas);
	return __this;
}

DataSourceBehaviour_obj::DataSourceBehaviour_obj()
{
}

void DataSourceBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataSourceBehaviour);
	HX_MARK_MEMBER_NAME(_canvas,"_canvas");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataSourceBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_canvas,"_canvas");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DataSourceBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { return ::hx::Val( _canvas ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataSourceBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { _canvas=inValue.Cast<  ::haxe::ui::components::Canvas >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataSourceBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_canvas",77,66,b9,26));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataSourceBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::components::Canvas */ ,(int)offsetof(DataSourceBehaviour_obj,_canvas),HX_("_canvas",77,66,b9,26)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataSourceBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DataSourceBehaviour_obj_sMemberFields[] = {
	HX_("_canvas",77,66,b9,26),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class DataSourceBehaviour_obj::__mClass;

void DataSourceBehaviour_obj::__register()
{
	DataSourceBehaviour_obj _hx_dummy;
	DataSourceBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Canvas.DataSourceBehaviour",9b,10,07,65);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DataSourceBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DataSourceBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DataSourceBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DataSourceBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Canvas
