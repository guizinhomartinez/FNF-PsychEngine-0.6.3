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
#ifndef INCLUDED_haxe_ui_components_Scroll
#include <haxe/ui/components/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_components_VerticalScroll
#include <haxe/ui/components/VerticalScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_Box
#include <haxe/ui/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_IVirtualContainer
#include <haxe/ui/containers/IVirtualContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_ScrollViewBuilder
#include <haxe/ui/containers/ScrollViewBuilder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TableView
#include <haxe/ui/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_Builder
#include <haxe/ui/containers/_TableView/Builder.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TableView_SelectedIndicesBehaviour
#include <haxe/ui/containers/_TableView/SelectedIndicesBehaviour.h>
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
#ifndef INCLUDED_haxe_ui_core_IDirectionalComponent
#include <haxe/ui/core/IDirectionalComponent.h>
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
#ifndef INCLUDED_haxe_ui_events_UIEvent
#include <haxe/ui/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_focus_IFocusable
#include <haxe/ui/focus/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_geom_Rectangle
#include <haxe/ui/geom/Rectangle.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_92d5b36e614fdbbf_683_new,"haxe.ui.containers._TableView.SelectedIndicesBehaviour","new",0xed0f42d3,"haxe.ui.containers._TableView.SelectedIndicesBehaviour.new","haxe/ui/containers/TableView.hx",683,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_92d5b36e614fdbbf_685_get,"haxe.ui.containers._TableView.SelectedIndicesBehaviour","get",0xed09f309,"haxe.ui.containers._TableView.SelectedIndicesBehaviour.get","haxe/ui/containers/TableView.hx",685,0x8a42a716)
HX_LOCAL_STACK_FRAME(_hx_pos_92d5b36e614fdbbf_688_validateData,"haxe.ui.containers._TableView.SelectedIndicesBehaviour","validateData",0x451d7d0d,"haxe.ui.containers._TableView.SelectedIndicesBehaviour.validateData","haxe/ui/containers/TableView.hx",688,0x8a42a716)
namespace haxe{
namespace ui{
namespace containers{
namespace _TableView{

void SelectedIndicesBehaviour_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_92d5b36e614fdbbf_683_new)
HXDLIN( 683)		super::__construct(component);
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
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x02960031) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x02960031;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

 ::haxe::ui::util::VariantType SelectedIndicesBehaviour_obj::get(){
            	HX_STACKFRAME(&_hx_pos_92d5b36e614fdbbf_685_get)
HXDLIN( 685)		if (::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value)) {
HXDLIN( 685)			return ::haxe::ui::util::_Variant::Variant_Impl__obj::fromArray(::cpp::VirtualArray_obj::__new(0));
            		}
            		else {
HXDLIN( 685)			return this->_value;
            		}
HXDLIN( 685)		return null();
            	}


void SelectedIndicesBehaviour_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_92d5b36e614fdbbf_688_validateData)
HXLINE( 689)		 ::haxe::ui::containers::TableView tableView = ::hx::TCast<  ::haxe::ui::containers::TableView >::cast(this->_component);
HXLINE( 690)		::Array< int > selectedIndices = tableView->get_selectedIndices();
HXLINE( 691)		 ::haxe::ui::core::Component contents = this->_component->findComponent(HX_("scrollview-contents",15,b7,70,a7),null(),false,HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 692)		 ::haxe::ui::core::ItemRenderer itemToEnsure = null();
HXLINE( 693)		 ::haxe::ui::containers::_TableView::Builder builder = ::hx::TCast<  ::haxe::ui::containers::_TableView::Builder >::cast(this->_component->_compositeBuilder);
HXLINE( 695)		{
HXLINE( 695)			int _g = 0;
HXDLIN( 695)			::Array< ::Dynamic> _g1;
HXDLIN( 695)			if (::hx::IsNull( contents->_children )) {
HXLINE( 695)				_g1 = ::Array_obj< ::Dynamic>::__new(0);
            			}
            			else {
HXLINE( 695)				_g1 = contents->_children;
            			}
HXDLIN( 695)			while((_g < _g1->length)){
HXLINE( 695)				 ::haxe::ui::core::Component child = _g1->__get(_g).StaticCast<  ::haxe::ui::core::Component >();
HXDLIN( 695)				_g = (_g + 1);
HXLINE( 696)				if ((selectedIndices->indexOf(::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(child)->itemIndex,null()) != -1)) {
HXLINE( 697)					itemToEnsure = ::hx::TCast<  ::haxe::ui::core::ItemRenderer >::cast(child);
HXLINE( 698)					builder->addItemRendererClass(child,HX_(":selected",95,f4,1e,7c),null());
            				}
            				else {
HXLINE( 700)					builder->addItemRendererClass(child,HX_(":selected",95,f4,1e,7c),false);
            				}
            			}
            		}
HXLINE( 704)		bool _hx_tmp;
HXDLIN( 704)		if (::hx::IsNotNull( itemToEnsure )) {
HXLINE( 704)			_hx_tmp = (tableView->get_virtual() == false);
            		}
            		else {
HXLINE( 704)			_hx_tmp = false;
            		}
HXDLIN( 704)		if (_hx_tmp) {
HXLINE( 705)			 ::haxe::ui::components::VerticalScroll vscroll = tableView->findComponent(null(),::hx::ClassOf< ::haxe::ui::components::VerticalScroll >(),null(),null()).StaticCast<  ::haxe::ui::components::VerticalScroll >();
HXLINE( 706)			if (::hx::IsNotNull( vscroll )) {
HXLINE( 707)				Float vpos = vscroll->get_pos();
HXLINE( 708)				 ::haxe::ui::core::Component contents = tableView->findComponent(HX_("tableview-contents",74,2a,d3,78),null(),null(),HX_("css",c3,83,4b,00)).StaticCast<  ::haxe::ui::core::Component >();
HXLINE( 709)				 ::Dynamic _hx_tmp = itemToEnsure->get_top();
HXDLIN( 709)				Float _hx_tmp1 = (_hx_tmp + itemToEnsure->get_height());
HXDLIN( 709)				if ((_hx_tmp1 > (vpos + contents->get_componentClipRect()->height))) {
HXLINE( 710)					 ::Dynamic _hx_tmp = itemToEnsure->get_top();
HXDLIN( 710)					Float _hx_tmp1 = (_hx_tmp + itemToEnsure->get_height());
HXDLIN( 710)					vscroll->set_pos((_hx_tmp1 - contents->get_componentClipRect()->height));
            				}
            				else {
HXLINE( 711)					if (::hx::IsLess( itemToEnsure->get_top(),vpos )) {
HXLINE( 712)						vscroll->set_pos(( (Float)(itemToEnsure->get_top()) ));
            					}
            				}
            			}
            		}
HXLINE( 717)		bool _hx_tmp1;
HXDLIN( 717)		if ((tableView->get_selectedIndex() != -1)) {
HXLINE( 717)			_hx_tmp1 = (tableView->get_selectedIndices()->length != 0);
            		}
            		else {
HXLINE( 717)			_hx_tmp1 = false;
            		}
HXDLIN( 717)		if (_hx_tmp1) {
HXLINE( 718)			 ::haxe::ui::core::Component _hx_tmp = this->_component;
HXDLIN( 718)			_hx_tmp->dispatch( ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null()));
            		}
            	}



::hx::ObjectPtr< SelectedIndicesBehaviour_obj > SelectedIndicesBehaviour_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedIndicesBehaviour_obj > __this = new SelectedIndicesBehaviour_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedIndicesBehaviour_obj > SelectedIndicesBehaviour_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedIndicesBehaviour_obj *__this = (SelectedIndicesBehaviour_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedIndicesBehaviour_obj), true, "haxe.ui.containers._TableView.SelectedIndicesBehaviour"));
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
	__mClass->mName = HX_("haxe.ui.containers._TableView.SelectedIndicesBehaviour",61,dd,42,9d);
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
} // end namespace _TableView
