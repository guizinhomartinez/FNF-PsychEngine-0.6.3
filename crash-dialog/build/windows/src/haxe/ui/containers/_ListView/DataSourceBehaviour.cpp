#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_Toolkit
#include <haxe/ui/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_backend_EventBase
#include <haxe/ui/backend/EventBase.h>
#endif
#ifndef INCLUDED_haxe_ui_backend_EventImpl
#include <haxe/ui/backend/EventImpl.h>
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
#ifndef INCLUDED_haxe_ui_containers__ListView_DataSourceBehaviour
#include <haxe/ui/containers/_ListView/DataSourceBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_data_ArrayDataSource
#include <haxe/ui/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_DataSource
#include <haxe/ui/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_data_transformation_IItemTransformer
#include <haxe/ui/data/transformation/IItemTransformer.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_cca8cd42b25d3745_418_new,"haxe.ui.containers._ListView.DataSourceBehaviour","new",0x2ed15754,"haxe.ui.containers._ListView.DataSourceBehaviour.new","haxe/ui/containers/ListView.hx",418,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_cca8cd42b25d3745_420_set,"haxe.ui.containers._ListView.DataSourceBehaviour","set",0x2ed52296,"haxe.ui.containers._ListView.DataSourceBehaviour.set","haxe/ui/containers/ListView.hx",420,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_cca8cd42b25d3745_424_set,"haxe.ui.containers._ListView.DataSourceBehaviour","set",0x2ed52296,"haxe.ui.containers._ListView.DataSourceBehaviour.set","haxe/ui/containers/ListView.hx",424,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_cca8cd42b25d3745_441_get,"haxe.ui.containers._ListView.DataSourceBehaviour","get",0x2ecc078a,"haxe.ui.containers._ListView.DataSourceBehaviour.get","haxe/ui/containers/ListView.hx",441,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_cca8cd42b25d3745_451_dispatchChanged,"haxe.ui.containers._ListView.DataSourceBehaviour","dispatchChanged",0x37bcda4e,"haxe.ui.containers._ListView.DataSourceBehaviour.dispatchChanged","haxe/ui/containers/ListView.hx",451,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_cca8cd42b25d3745_449_dispatchChanged,"haxe.ui.containers._ListView.DataSourceBehaviour","dispatchChanged",0x37bcda4e,"haxe.ui.containers._ListView.DataSourceBehaviour.dispatchChanged","haxe/ui/containers/ListView.hx",449,0xe137bf10)
namespace haxe{
namespace ui{
namespace containers{
namespace _ListView{

void DataSourceBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_cca8cd42b25d3745_418_new)
HXLINE( 419)		this->_firstPass = true;
HXLINE( 418)		super::__construct(component);
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
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x160202e2) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x160202e2;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void DataSourceBehaviour_obj::set( ::haxe::ui::util::VariantType value){
            	HX_STACKFRAME(&_hx_pos_cca8cd42b25d3745_420_set)
HXDLIN( 420)		 ::haxe::ui::containers::_ListView::DataSourceBehaviour _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 421)		this->super::set(value);
HXLINE( 422)		 ::haxe::ui::data::DataSource dataSource = ::haxe::ui::util::_Variant::Variant_Impl__obj::toDataSource(this->_value);
HXLINE( 423)		if (::hx::IsNotNull( dataSource )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::_ListView::DataSourceBehaviour,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_cca8cd42b25d3745_424_set)
HXLINE( 425)				{
HXLINE( 425)					 ::haxe::ui::core::Component _this = _gthis->_component;
HXDLIN( 425)					bool _hx_tmp;
HXDLIN( 425)					if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 425)						_hx_tmp = (_this->_layoutLocked == true);
            					}
            					else {
HXLINE( 425)						_hx_tmp = true;
            					}
HXDLIN( 425)					if (!(_hx_tmp)) {
HXLINE( 425)						_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            					}
            				}
HXLINE( 426)				if ((_gthis->_firstPass == true)) {
HXLINE( 428)					_gthis->_firstPass = false;
HXLINE( 429)					{
HXLINE( 429)						 ::haxe::ui::core::Component _this = _gthis->_component;
HXDLIN( 429)						bool _hx_tmp;
HXDLIN( 429)						if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 429)							_hx_tmp = (_this->_layoutLocked == true);
            						}
            						else {
HXLINE( 429)							_hx_tmp = true;
            						}
HXDLIN( 429)						if (!(_hx_tmp)) {
HXLINE( 429)							_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            						}
            					}
            				}
HXLINE( 431)				_gthis->dispatchChanged();
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 424)			dataSource->onDataSourceChange =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 434)			{
HXLINE( 434)				 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 434)				bool _hx_tmp;
HXDLIN( 434)				if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 434)					_hx_tmp = (_this->_layoutLocked == true);
            				}
            				else {
HXLINE( 434)					_hx_tmp = true;
            				}
HXDLIN( 434)				if (!(_hx_tmp)) {
HXLINE( 434)					_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            				}
            			}
            		}
            		else {
HXLINE( 436)			 ::haxe::ui::core::Component _this = this->_component;
HXDLIN( 436)			bool _hx_tmp;
HXDLIN( 436)			if (::hx::IsNotNull( _this->_layout )) {
HXLINE( 436)				_hx_tmp = (_this->_layoutLocked == true);
            			}
            			else {
HXLINE( 436)				_hx_tmp = true;
            			}
HXDLIN( 436)			if (!(_hx_tmp)) {
HXLINE( 436)				_this->invalidateComponent(HX_("layout",aa,ae,b8,58),false);
            			}
            		}
HXLINE( 438)		this->dispatchChanged();
            	}


 ::haxe::ui::util::VariantType DataSourceBehaviour_obj::get(){
            	HX_GC_STACKFRAME(&_hx_pos_cca8cd42b25d3745_441_get)
HXLINE( 442)		bool _hx_tmp;
HXDLIN( 442)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 442)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXLINE( 442)			_hx_tmp = true;
            		}
HXDLIN( 442)		if (_hx_tmp) {
HXLINE( 443)			this->_value = ::haxe::ui::util::_Variant::Variant_Impl__obj::fromDataSource( ::haxe::ui::data::ArrayDataSource_obj::__alloc( HX_CTX ,null()));
HXLINE( 444)			this->set(this->_value);
            		}
HXLINE( 446)		return this->_value;
            	}


void DataSourceBehaviour_obj::dispatchChanged(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::haxe::ui::containers::_ListView::DataSourceBehaviour,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_cca8cd42b25d3745_451_dispatchChanged)
HXLINE( 451)			 ::haxe::ui::core::Component _gthis1 = _gthis->_component;
HXDLIN( 451)			_gthis1->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("propertychange",85,47,b1,35),false,HX_("dataSource",a5,76,d3,1d)));
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_cca8cd42b25d3745_449_dispatchChanged)
HXDLIN( 449)		 ::haxe::ui::containers::_ListView::DataSourceBehaviour _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 450)		::haxe::ui::Toolkit_obj::callLater( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DataSourceBehaviour_obj,dispatchChanged,(void))


::hx::ObjectPtr< DataSourceBehaviour_obj > DataSourceBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< DataSourceBehaviour_obj > __this = new DataSourceBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< DataSourceBehaviour_obj > DataSourceBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	DataSourceBehaviour_obj *__this = (DataSourceBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DataSourceBehaviour_obj), true, "haxe.ui.containers._ListView.DataSourceBehaviour"));
	*(void **)__this = DataSourceBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

DataSourceBehaviour_obj::DataSourceBehaviour_obj()
{
}

::hx::Val DataSourceBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_firstPass") ) { return ::hx::Val( _firstPass ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dispatchChanged") ) { return ::hx::Val( dispatchChanged_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DataSourceBehaviour_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_firstPass") ) { _firstPass=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataSourceBehaviour_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_firstPass",e2,dc,c2,5c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DataSourceBehaviour_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DataSourceBehaviour_obj,_firstPass),HX_("_firstPass",e2,dc,c2,5c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DataSourceBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String DataSourceBehaviour_obj_sMemberFields[] = {
	HX_("_firstPass",e2,dc,c2,5c),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("dispatchChanged",5a,b5,96,84),
	::String(null()) };

::hx::Class DataSourceBehaviour_obj::__mClass;

void DataSourceBehaviour_obj::__register()
{
	DataSourceBehaviour_obj _hx_dummy;
	DataSourceBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ListView.DataSourceBehaviour",62,5d,de,17);
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
} // end namespace containers
} // end namespace _ListView
