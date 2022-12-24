#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_backend_ImageBase
#include <haxe/ui/backend/ImageBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageDisplayImpl
#include <haxe/ui/backend/ImageDisplayImpl.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_ImageSurface
#include <haxe/ui/backend/ImageSurface.h>
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
#ifndef INCLUDED_haxe_ui_components_Image
#include <haxe/ui/components/Image.h>
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
#ifndef INCLUDED_haxe_ui_core_IClonable
#include <haxe/ui/core/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IDataComponent
#include <haxe/ui/core/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ImageDisplay
#include <haxe/ui/core/ImageDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_ILayout
#include <haxe/ui/layouts/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_layouts_Layout
#include <haxe/ui/layouts/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_util_GUID
#include <haxe/ui/util/GUID.h>
#endif
#ifndef INCLUDED_haxe_ui_util_ImageLoader
#include <haxe/ui/util/ImageLoader.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2bce414617decee2_218_new,"haxe.ui.components._Image.ResourceBehaviour","new",0xc7c85df5,"haxe.ui.components._Image.ResourceBehaviour.new","haxe/ui/components/Image.hx",218,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_2bce414617decee2_221_validateData,"haxe.ui.components._Image.ResourceBehaviour","validateData",0x2fccedab,"haxe.ui.components._Image.ResourceBehaviour.validateData","haxe/ui/components/Image.hx",221,0xeed4974a)
HX_LOCAL_STACK_FRAME(_hx_pos_2bce414617decee2_258_validateData,"haxe.ui.components._Image.ResourceBehaviour","validateData",0x2fccedab,"haxe.ui.components._Image.ResourceBehaviour.validateData","haxe/ui/components/Image.hx",258,0xeed4974a)
namespace haxe{
namespace ui{
namespace components{
namespace _Image{

void ResourceBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_2bce414617decee2_218_new)
HXLINE( 219)		this->_canvasMap = null();
HXLINE( 218)		super::__construct(component);
            	}

Dynamic ResourceBehaviour_obj::__CreateEmpty() { return new ResourceBehaviour_obj; }

void *ResourceBehaviour_obj::_hx_vtable = 0;

Dynamic ResourceBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ResourceBehaviour_obj > _hx_result = new ResourceBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ResourceBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x4a102d23 || inClassId==(int)0x7e17fa9f;
	}
}

void ResourceBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_2bce414617decee2_221_validateData)
HXDLIN( 221)		 ::haxe::ui::components::_Image::ResourceBehaviour _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 222)		bool _hx_tmp;
HXDLIN( 222)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 222)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXLINE( 222)			_hx_tmp = true;
            		}
HXDLIN( 222)		if (_hx_tmp) {
HXLINE( 223)			this->_component->removeImageDisplay();
HXLINE( 224)			this->_component->invalidateComponent(null(),null());
HXLINE( 225)			return;
            		}
HXLINE( 228)		bool _hx_tmp1;
HXDLIN( 228)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isComponent(this->_value)) {
HXLINE( 228)			_hx_tmp1 = ::Std_obj::isOfType(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_value),::hx::ClassOf< ::haxe::ui::components::Canvas >());
            		}
            		else {
HXLINE( 228)			_hx_tmp1 = false;
            		}
HXDLIN( 228)		if (_hx_tmp1) {
HXLINE( 229)			 ::haxe::ui::components::Canvas newCanvas = null();
HXLINE( 230)			if (::hx::IsNull( this->_canvasMap )) {
HXLINE( 231)				this->_canvasMap =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            			}
HXLINE( 233)			 ::haxe::ui::core::Component canvas = ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_value);
HXLINE( 234)			if (::hx::IsNull( canvas->get_id() )) {
HXLINE( 235)				canvas->set_id(::haxe::ui::util::GUID_obj::uuid());
            			}
HXLINE( 238)			 ::haxe::ui::components::Canvas existingCanvas = this->_component->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::Canvas >(),false,null()).StaticCast<  ::haxe::ui::components::Canvas >();
HXLINE( 239)			bool _hx_tmp;
HXDLIN( 239)			if (::hx::IsNotNull( existingCanvas )) {
HXLINE( 239)				::String _hx_tmp1 = existingCanvas->get_id();
HXDLIN( 239)				_hx_tmp = (_hx_tmp1 == canvas->get_id());
            			}
            			else {
HXLINE( 239)				_hx_tmp = false;
            			}
HXDLIN( 239)			if (_hx_tmp) {
HXLINE( 240)				return;
            			}
HXLINE( 243)			if (::hx::IsNotNull( existingCanvas )) {
HXLINE( 244)				this->_component->removeComponent(existingCanvas,false,null());
            			}
HXLINE( 247)			::Dynamic this1 = this->_canvasMap;
HXDLIN( 247)			if (( ( ::haxe::ds::StringMap)(this1) )->exists(canvas->get_id())) {
HXLINE( 248)				::Dynamic this1 = this->_canvasMap;
HXDLIN( 248)				newCanvas = ( ( ::haxe::ui::components::Canvas)(( ( ::haxe::ds::StringMap)(this1) )->get(canvas->get_id())) );
            			}
            			else {
HXLINE( 250)				newCanvas = ( ( ::haxe::ui::components::Canvas)(Dynamic( ::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_value)->cloneComponent()).StaticCast<  ::haxe::ui::core::Component >()) );
HXLINE( 251)				{
HXLINE( 251)					::Dynamic this1 = this->_canvasMap;
HXDLIN( 251)					( ( ::haxe::ds::StringMap)(this1) )->set(canvas->get_id(),newCanvas);
            				}
            			}
HXLINE( 254)			this->_component->addComponent(newCanvas);
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::components::_Image::ResourceBehaviour,_gthis) HXARGC(1)
            			void _hx_run( ::Dynamic imageInfo){
            				HX_GC_STACKFRAME(&_hx_pos_2bce414617decee2_258_validateData)
HXLINE( 258)				if (::hx::IsNotNull( imageInfo )) {
HXLINE( 259)					bool _hx_tmp;
HXDLIN( 259)					if (::hx::IsNotNull( _gthis->_value )) {
HXLINE( 259)						_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(_gthis->_value);
            					}
            					else {
HXLINE( 259)						_hx_tmp = true;
            					}
HXDLIN( 259)					if (_hx_tmp) {
HXLINE( 260)						_gthis->_component->removeImageDisplay();
HXLINE( 261)						_gthis->_component->invalidateComponent(null(),null());
HXLINE( 262)						return;
            					}
HXLINE( 265)					 ::haxe::ui::components::Image image = ::hx::TCast<  ::haxe::ui::components::Image >::cast(_gthis->_component);
HXLINE( 266)					if (::hx::IsNull( image )) {
HXLINE( 267)						return;
            					}
HXLINE( 269)					 ::haxe::ui::core::ImageDisplay display = image->getImageDisplay();
HXLINE( 270)					if (::hx::IsNotNull( display )) {
HXLINE( 271)						display->set_imageInfo(imageInfo);
HXLINE( 272)						image->set_originalWidth(( (Float)(imageInfo->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ));
HXLINE( 273)						image->set_originalHeight(( (Float)(imageInfo->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ));
HXLINE( 274)						bool _hx_tmp;
HXDLIN( 274)						if ((image->autoSize() == true)) {
HXLINE( 274)							_hx_tmp = ::hx::IsNotNull( image->parentComponent );
            						}
            						else {
HXLINE( 274)							_hx_tmp = false;
            						}
HXDLIN( 274)						if (_hx_tmp) {
HXLINE( 275)							 ::haxe::ui::core::Component _this = image->parentComponent;
HXDLIN( 275)							bool _hx_tmp;
HXDLIN( 275)							if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 275)								_hx_tmp = (_this->_layoutLocked == true);
            							}
            							else {
HXLINE( 275)								_hx_tmp = true;
            							}
HXDLIN( 275)							if (!(_hx_tmp)) {
HXLINE( 275)								_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            							}
            						}
HXLINE( 277)						image->invalidateComponent(null(),null());
HXLINE( 278)						display->validateComponent();
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 256)			 ::haxe::ui::util::ImageLoader imageLoader =  ::haxe::ui::util::ImageLoader_obj::__alloc( HX_CTX ,this->_value);
HXLINE( 257)			imageLoader->load( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            		}
            	}



::hx::ObjectPtr< ResourceBehaviour_obj > ResourceBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< ResourceBehaviour_obj > __this = new ResourceBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< ResourceBehaviour_obj > ResourceBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	ResourceBehaviour_obj *__this = (ResourceBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ResourceBehaviour_obj), true, "haxe.ui.components._Image.ResourceBehaviour"));
	*(void **)__this = ResourceBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

ResourceBehaviour_obj::ResourceBehaviour_obj()
{
}

void ResourceBehaviour_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ResourceBehaviour);
	HX_MARK_MEMBER_NAME(_canvasMap,"_canvasMap");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ResourceBehaviour_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_canvasMap,"_canvasMap");
	 ::haxe::ui::behaviours::ValueBehaviour_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ResourceBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_canvasMap") ) { return ::hx::Val( _canvasMap ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ResourceBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_canvasMap") ) { _canvasMap=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResourceBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_canvasMap",65,80,8d,cd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ResourceBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ResourceBehaviour_obj,_canvasMap),HX_("_canvasMap",65,80,8d,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ResourceBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String ResourceBehaviour_obj_sMemberFields[] = {
	HX_("_canvasMap",65,80,8d,cd),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class ResourceBehaviour_obj::__mClass;

void ResourceBehaviour_obj::__register()
{
	ResourceBehaviour_obj _hx_dummy;
	ResourceBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.components._Image.ResourceBehaviour",83,3f,83,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ResourceBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ResourceBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ResourceBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ResourceBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace components
} // end namespace _Image
