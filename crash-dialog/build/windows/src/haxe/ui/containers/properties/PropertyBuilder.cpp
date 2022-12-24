#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_components_Label
#include <haxe/ui/components/Label.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_HBox
#include <haxe/ui/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_Property
#include <haxe/ui/containers/properties/Property.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_properties_PropertyBuilder
#include <haxe/ui/containers/properties/PropertyBuilder.h>
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
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_76bdeece454bf4b8_122_new,"haxe.ui.containers.properties.PropertyBuilder","new",0x79e5eea7,"haxe.ui.containers.properties.PropertyBuilder.new","haxe/ui/containers/properties/Property.hx",122,0xa93e75b8)
HX_LOCAL_STACK_FRAME(_hx_pos_76bdeece454bf4b8_126_addComponent,"haxe.ui.containers.properties.PropertyBuilder","addComponent",0xe1897335,"haxe.ui.containers.properties.PropertyBuilder.addComponent","haxe/ui/containers/properties/Property.hx",126,0xa93e75b8)
HX_LOCAL_STACK_FRAME(_hx_pos_76bdeece454bf4b8_132_addComponent,"haxe.ui.containers.properties.PropertyBuilder","addComponent",0xe1897335,"haxe.ui.containers.properties.PropertyBuilder.addComponent","haxe/ui/containers/properties/Property.hx",132,0xa93e75b8)
HX_LOCAL_STACK_FRAME(_hx_pos_76bdeece454bf4b8_144_get_actualEditor,"haxe.ui.containers.properties.PropertyBuilder","get_actualEditor",0xb6e08cbd,"haxe.ui.containers.properties.PropertyBuilder.get_actualEditor","haxe/ui/containers/properties/Property.hx",144,0xa93e75b8)
HX_LOCAL_STACK_FRAME(_hx_pos_76bdeece454bf4b8_152_get_actualEditor,"haxe.ui.containers.properties.PropertyBuilder","get_actualEditor",0xb6e08cbd,"haxe.ui.containers.properties.PropertyBuilder.get_actualEditor","haxe/ui/containers/properties/Property.hx",152,0xa93e75b8)
namespace haxe{
namespace ui{
namespace containers{
namespace properties{

void PropertyBuilder_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_76bdeece454bf4b8_122_new)
HXLINE( 124)		this->label = null();
HXLINE( 123)		this->editor = null();
HXLINE( 122)		super::__construct(component);
            	}

Dynamic PropertyBuilder_obj::__CreateEmpty() { return new PropertyBuilder_obj; }

void *PropertyBuilder_obj::_hx_vtable = 0;

Dynamic PropertyBuilder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PropertyBuilder_obj > _hx_result = new PropertyBuilder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PropertyBuilder_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0472fd8d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0472fd8d;
	} else {
		return inClassId==(int)0x65a5fc07;
	}
}

 ::haxe::ui::core::Component PropertyBuilder_obj::addComponent( ::haxe::ui::core::Component child){
            	HX_STACKFRAME(&_hx_pos_76bdeece454bf4b8_126_addComponent)
HXDLIN( 126)		 ::haxe::ui::containers::properties::PropertyBuilder _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 127)		 ::Dynamic v = ::hx::TCast<  ::haxe::ui::core::ComponentContainer >::cast(this->_component)->get_value();
HXLINE( 128)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::haxe::ui::core::IValueComponent >())) {
HXLINE( 129)			this->editor = child;
HXLINE( 130)			this->editor->set_value(v);
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::properties::PropertyBuilder,_gthis, ::Dynamic,v, ::haxe::ui::core::Component,child) HXARGC(1)
            			bool _hx_run( ::haxe::ui::core::Component c){
            				HX_STACKFRAME(&_hx_pos_76bdeece454bf4b8_132_addComponent)
HXLINE( 133)				if (::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::core::IValueComponent >())) {
HXLINE( 134)					_gthis->editor = child;
HXLINE( 135)					c->set_value(v);
            				}
HXLINE( 137)				return ::hx::IsNull( _gthis->editor );
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 132)			child->walkComponents( ::Dynamic(new _hx_Closure_0(_gthis,v,child)));
            		}
HXLINE( 140)		return child;
            	}


 ::haxe::ui::core::Component PropertyBuilder_obj::get_actualEditor(){
            	HX_STACKFRAME(&_hx_pos_76bdeece454bf4b8_144_get_actualEditor)
HXLINE( 145)		if (::hx::IsNull( this->editor )) {
HXLINE( 146)			return null();
            		}
HXLINE( 148)		::Array< ::Dynamic> r = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 149)		if (::Std_obj::isOfType(this->editor,::hx::ClassOf< ::haxe::ui::core::IValueComponent >())) {
HXLINE( 150)			r[0] = this->editor;
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,r) HXARGC(1)
            			bool _hx_run( ::haxe::ui::core::Component c){
            				HX_STACKFRAME(&_hx_pos_76bdeece454bf4b8_152_get_actualEditor)
HXLINE( 153)				if (::Std_obj::isOfType(c,::hx::ClassOf< ::haxe::ui::core::IValueComponent >())) {
HXLINE( 154)					r[0] = c;
            				}
HXLINE( 156)				return ::hx::IsNull( r->__get(0).StaticCast<  ::haxe::ui::core::Component >() );
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 152)			this->editor->walkComponents( ::Dynamic(new _hx_Closure_0(r)));
            		}
HXLINE( 159)		return r->__get(0).StaticCast<  ::haxe::ui::core::Component >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(PropertyBuilder_obj,get_actualEditor,return )


::hx::ObjectPtr< PropertyBuilder_obj > PropertyBuilder_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< PropertyBuilder_obj > __this = new PropertyBuilder_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< PropertyBuilder_obj > PropertyBuilder_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	PropertyBuilder_obj *__this = (PropertyBuilder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PropertyBuilder_obj), true, "haxe.ui.containers.properties.PropertyBuilder"));
	*(void **)__this = PropertyBuilder_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

PropertyBuilder_obj::PropertyBuilder_obj()
{
}

void PropertyBuilder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyBuilder);
	HX_MARK_MEMBER_NAME(editor,"editor");
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(actualEditor,"actualEditor");
	 ::haxe::ui::core::CompositeBuilder_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PropertyBuilder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(editor,"editor");
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(actualEditor,"actualEditor");
	 ::haxe::ui::core::CompositeBuilder_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PropertyBuilder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return ::hx::Val( label ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"editor") ) { return ::hx::Val( editor ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addComponent") ) { return ::hx::Val( addComponent_dyn() ); }
		if (HX_FIELD_EQ(inName,"actualEditor") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_actualEditor() : actualEditor ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_actualEditor") ) { return ::hx::Val( get_actualEditor_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PropertyBuilder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast<  ::haxe::ui::components::Label >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"editor") ) { editor=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualEditor") ) { actualEditor=inValue.Cast<  ::haxe::ui::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyBuilder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("editor",ad,41,dd,3b));
	outFields->push(HX_("label",f4,0d,af,6f));
	outFields->push(HX_("actualEditor",db,5e,3c,f1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PropertyBuilder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(PropertyBuilder_obj,editor),HX_("editor",ad,41,dd,3b)},
	{::hx::fsObject /*  ::haxe::ui::components::Label */ ,(int)offsetof(PropertyBuilder_obj,label),HX_("label",f4,0d,af,6f)},
	{::hx::fsObject /*  ::haxe::ui::core::Component */ ,(int)offsetof(PropertyBuilder_obj,actualEditor),HX_("actualEditor",db,5e,3c,f1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PropertyBuilder_obj_sStaticStorageInfo = 0;
#endif

static ::String PropertyBuilder_obj_sMemberFields[] = {
	HX_("editor",ad,41,dd,3b),
	HX_("label",f4,0d,af,6f),
	HX_("addComponent",5c,12,a8,0e),
	HX_("actualEditor",db,5e,3c,f1),
	HX_("get_actualEditor",64,4b,db,f5),
	::String(null()) };

::hx::Class PropertyBuilder_obj::__mClass;

void PropertyBuilder_obj::__register()
{
	PropertyBuilder_obj _hx_dummy;
	PropertyBuilder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers.properties.PropertyBuilder",35,0f,3a,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PropertyBuilder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PropertyBuilder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PropertyBuilder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PropertyBuilder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace properties
