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
#ifndef INCLUDED_haxe_ui_behaviours_DataBehaviour
#include <haxe/ui/behaviours/DataBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_IValidatingBehaviour
#include <haxe/ui/behaviours/IValidatingBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_behaviours_ValueBehaviour
#include <haxe/ui/behaviours/ValueBehaviour.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListView
#include <haxe/ui/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ListViewEvents
#include <haxe/ui/containers/ListViewEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewEvents
#include <haxe/ui/containers/ScrollViewEvents.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_ListViewBuilder
#include <haxe/ui/containers/_ListView/ListViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__ListView_SelectedIndicesBehaviour
#include <haxe/ui/containers/_ListView/SelectedIndicesBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IScrollView
#include <haxe/ui/core/IScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_core_IValueComponent
#include <haxe/ui/core/IValueComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_InteractiveComponent
#include <haxe/ui/core/InteractiveComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_core_ItemRenderer
#include <haxe/ui/core/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_events_Events
#include <haxe/ui/events/Events.h>
#endif
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_38ee9375c76dbd6e_489_new,"haxe.ui.containers._ListView.SelectedIndicesBehaviour","new",0xb006b839,"haxe.ui.containers._ListView.SelectedIndicesBehaviour.new","haxe/ui/containers/ListView.hx",489,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_38ee9375c76dbd6e_491_get,"haxe.ui.containers._ListView.SelectedIndicesBehaviour","get",0xb001686f,"haxe.ui.containers._ListView.SelectedIndicesBehaviour.get","haxe/ui/containers/ListView.hx",491,0xe137bf10)
HX_LOCAL_STACK_FRAME(_hx_pos_38ee9375c76dbd6e_494_validateData,"haxe.ui.containers._ListView.SelectedIndicesBehaviour","validateData",0x91bb2ae7,"haxe.ui.containers._ListView.SelectedIndicesBehaviour.validateData","haxe/ui/containers/ListView.hx",494,0xe137bf10)
namespace haxe{
namespace ui{
namespace containers{
namespace _ListView{

void SelectedIndicesBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_38ee9375c76dbd6e_489_new)
HXDLIN( 489)		super::__construct(component);
            	}

Dynamic SelectedIndicesBehaviour_obj::__CreateEmpty() { return new SelectedIndicesBehaviour_obj; }

void *SelectedIndicesBehaviour_obj::_hx_vtable = 0;

Dynamic SelectedIndicesBehaviour_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedIndicesBehaviour_obj > _hx_result = new SelectedIndicesBehaviour_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedIndicesBehaviour_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3c5dd90d) {
		if (inClassId<=(int)0x37b9aa84) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x37b9aa84;
		} else {
			return inClassId==(int)0x3c5dd90d;
		}
	} else {
		return inClassId==(int)0x40229247 || inClassId==(int)0x7e17fa9f;
	}
}

 ::haxe::ui::util::VariantType SelectedIndicesBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_38ee9375c76dbd6e_491_get)
HXDLIN( 491)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value)) {
HXDLIN( 491)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromArray(::cpp::VirtualArray_obj::__new(0));
            		}
            		else {
HXDLIN( 491)			return this->_value;
            		}
HXDLIN( 491)		return null();
            	}


void SelectedIndicesBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_38ee9375c76dbd6e_494_validateData)
HXLINE( 495)		 ::haxe::ui::containers::ListView listView = ::hx::TCast<  ::haxe::ui::containers::ListView >::cast(this->_component);
HXLINE( 496)		::Array< int > selectedIndices = listView->get_selectedIndices();
HXLINE( 497)		 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 498)		 ::haxe::ui::containers::_ListView::ListViewBuilder builder = ::hx::TCast<  ::haxe::ui::containers::_ListView::ListViewBuilder >::cast(this->_component->_compositeBuilder);
HXLINE( 499)		 ::haxe::ui::containers::ListViewEvents events = ::hx::TCast<  ::haxe::ui::containers::ListViewEvents >::cast(this->_component->_internalEvents);
HXLINE( 501)		{
HXLINE( 501)			int _g = 0;
HXDLIN( 501)			::Array< ::Dynamic> _g1;
HXDLIN( 501)			if (::hx::IsNull( contents->_children )) {
HXLINE( 501)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 501)				_g1 = contents->_children;
            			}
HXDLIN( 501)			while((_g < _g1->length)){
HXLINE( 501)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 501)				_g = (_g + 1);
HXLINE( 502)				if ((selectedIndices->indexOf(::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(child)->itemIndex,null()) != -1)) {
HXLINE( 503)					builder->addItemRendererClass(child,HX_(":selected",95,f4,1e,7c),null());
            				}
            				else {
HXLINE( 505)					builder->addItemRendererClass(child,HX_(":selected",95,f4,1e,7c),false);
            				}
            			}
            		}
HXLINE( 509)		if ((listView->get_virtual() == true)) {
HXLINE( 510)			int _g = 0;
HXDLIN( 510)			while((_g < selectedIndices->length)){
HXLINE( 510)				int i = selectedIndices->__get(_g);
HXDLIN( 510)				_g = (_g + 1);
HXLINE( 511)				builder->ensureVirtualItemVisible(i);
            			}
            		}
HXLINE( 515)		bool _hx_tmp;
HXDLIN( 515)		if ((listView->get_selectedIndex() != -1)) {
HXLINE( 515)			_hx_tmp = (listView->get_selectedIndices()->length != 0);
            		}
            		else {
HXLINE( 515)			_hx_tmp = false;
            		}
HXDLIN( 515)		if (_hx_tmp) {
HXLINE( 516)			 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE( 517)			event->relatedEvent = events->lastEvent;
HXLINE( 518)			this->_component->dispatch(event);
            		}
            	}



::hx::ObjectPtr< SelectedIndicesBehaviour_obj > SelectedIndicesBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedIndicesBehaviour_obj > __this = new SelectedIndicesBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedIndicesBehaviour_obj > SelectedIndicesBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedIndicesBehaviour_obj *__this = (SelectedIndicesBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedIndicesBehaviour_obj), true, "haxe.ui.containers._ListView.SelectedIndicesBehaviour"));
	*(void **)__this = SelectedIndicesBehaviour_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedIndicesBehaviour_obj::SelectedIndicesBehaviour_obj()
{
}

::hx::Val SelectedIndicesBehaviour_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *SelectedIndicesBehaviour_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedIndicesBehaviour_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedIndicesBehaviour_obj_sMemberFields[] = {
	HX_("get",96,80,4e,00),
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class SelectedIndicesBehaviour_obj::__mClass;

void SelectedIndicesBehaviour_obj::__register()
{
	SelectedIndicesBehaviour_obj _hx_dummy;
	SelectedIndicesBehaviour_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._ListView.SelectedIndicesBehaviour",c7,27,ee,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedIndicesBehaviour_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedIndicesBehaviour_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedIndicesBehaviour_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedIndicesBehaviour_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _ListView
