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
#ifndef INCLUDED_haxe_ui_containers_ScrollView
#include <haxe/ui/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeView
#include <haxe/ui/containers/TreeView.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_TreeViewNode
#include <haxe/ui/containers/TreeViewNode.h>
#endif
#ifndef INCLUDED_haxe_ui_containers_VBox
#include <haxe/ui/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_containers__TreeView_SelectedNode
#include <haxe/ui/containers/_TreeView/SelectedNode.h>
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
#ifndef INCLUDED_haxe_ui_util_VariantType
#include <haxe/ui/util/VariantType.h>
#endif
#ifndef INCLUDED_haxe_ui_util__Variant_Variant_Impl_
#include <haxe/ui/util/_Variant/Variant_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ui_validation_IValidating
#include <haxe/ui/validation/IValidating.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ba4ccc8bcc2a0d7b_156_new,"haxe.ui.containers._TreeView.SelectedNode","new",0xf482d7a5,"haxe.ui.containers._TreeView.SelectedNode.new","haxe/ui/containers/TreeView.hx",156,0xc7a0e210)
HX_LOCAL_STACK_FRAME(_hx_pos_ba4ccc8bcc2a0d7b_157_validateData,"haxe.ui.containers._TreeView.SelectedNode","validateData",0x01adbdfb,"haxe.ui.containers._TreeView.SelectedNode.validateData","haxe/ui/containers/TreeView.hx",157,0xc7a0e210)
namespace haxe{
namespace ui{
namespace containers{
namespace _TreeView{

void SelectedNode_obj::__construct( ::haxe::ui::core::Component component){
            	HX_STACKFRAME(&_hx_pos_ba4ccc8bcc2a0d7b_156_new)
HXDLIN( 156)		super::__construct(component);
            	}

Dynamic SelectedNode_obj::__CreateEmpty() { return new SelectedNode_obj; }

void *SelectedNode_obj::_hx_vtable = 0;

Dynamic SelectedNode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SelectedNode_obj > _hx_result = new SelectedNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SelectedNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x37b9aa84) {
		if (inClassId<=(int)0x0fdea5eb) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0fdea5eb;
		} else {
			return inClassId==(int)0x37b9aa84;
		}
	} else {
		return inClassId==(int)0x3c5dd90d || inClassId==(int)0x7e17fa9f;
	}
}

void SelectedNode_obj::validateData(){
            	HX_GC_STACKFRAME(&_hx_pos_ba4ccc8bcc2a0d7b_157_validateData)
HXLINE( 158)		bool _hx_tmp;
HXDLIN( 158)		if (::hx::IsNotNull( this->_value )) {
HXLINE( 158)			_hx_tmp = ::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_value);
            		}
            		else {
HXLINE( 158)			_hx_tmp = true;
            		}
HXDLIN( 158)		if (_hx_tmp) {
HXLINE( 159)			bool _hx_tmp;
HXDLIN( 159)			if (::hx::IsNotNull( this->_previousValue )) {
HXLINE( 159)				_hx_tmp = !(::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_previousValue));
            			}
            			else {
HXLINE( 159)				_hx_tmp = false;
            			}
HXDLIN( 159)			if (_hx_tmp) {
HXLINE( 160)				 ::haxe::ui::containers::TreeViewNode previousSelection = ::hx::TCast<  ::haxe::ui::containers::TreeViewNode >::cast(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_previousValue));
HXLINE( 161)				 ::haxe::ui::core::ItemRenderer renderer = previousSelection->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),true,null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 162)				if (::hx::IsNotNull( renderer )) {
HXLINE( 163)					renderer->removeClass(HX_(":node-selected",cc,28,1b,90),true,true);
            				}
            			}
            		}
            		else {
HXLINE( 167)			bool _hx_tmp;
HXDLIN( 167)			if (::hx::IsNotNull( this->_previousValue )) {
HXLINE( 167)				_hx_tmp = !(::haxe::ui::util::_Variant::Variant_Impl__obj::get_isNull(this->_previousValue));
            			}
            			else {
HXLINE( 167)				_hx_tmp = false;
            			}
HXDLIN( 167)			if (_hx_tmp) {
HXLINE( 168)				 ::haxe::ui::containers::TreeViewNode previousSelection = ::hx::TCast<  ::haxe::ui::containers::TreeViewNode >::cast(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_previousValue));
HXLINE( 169)				 ::haxe::ui::core::ItemRenderer renderer = previousSelection->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),true,null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 170)				if (::hx::IsNotNull( renderer )) {
HXLINE( 171)					renderer->removeClass(HX_(":node-selected",cc,28,1b,90),true,true);
            				}
            			}
HXLINE( 175)			 ::haxe::ui::containers::TreeViewNode node = ::hx::TCast<  ::haxe::ui::containers::TreeViewNode >::cast(::haxe::ui::util::_Variant::Variant_Impl__obj::toComponent(this->_value));
HXLINE( 176)			 ::haxe::ui::containers::TreeViewNode p = node->parentNode;
HXLINE( 177)			while(::hx::IsNotNull( p )){
HXLINE( 178)				p->set_expanded(true);
HXLINE( 179)				p = p->parentNode;
            			}
HXLINE( 181)			 ::haxe::ui::core::ItemRenderer renderer = node->findComponent(null(),::hx::ClassOf< ::haxe::ui::core::ItemRenderer >(),true,null()).StaticCast<  ::haxe::ui::core::ItemRenderer >();
HXLINE( 182)			if (::hx::IsNotNull( renderer )) {
HXLINE( 183)				renderer->addClass(HX_(":node-selected",cc,28,1b,90),true,true);
            			}
HXLINE( 186)			::hx::TCast<  ::haxe::ui::containers::ScrollView >::cast(this->_component)->ensureVisible(node);
            		}
HXLINE( 189)		 ::haxe::ui::events::UIEvent event =  ::haxe::ui::events::UIEvent_obj::__alloc( HX_CTX ,HX_("change",70,91,72,b7),null(),null());
HXLINE( 190)		this->_component->dispatch(event);
            	}



::hx::ObjectPtr< SelectedNode_obj > SelectedNode_obj::__new( ::haxe::ui::core::Component component) {
	::hx::ObjectPtr< SelectedNode_obj > __this = new SelectedNode_obj();
	__this->__construct(component);
	return __this;
}

::hx::ObjectPtr< SelectedNode_obj > SelectedNode_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ui::core::Component component) {
	SelectedNode_obj *__this = (SelectedNode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SelectedNode_obj), true, "haxe.ui.containers._TreeView.SelectedNode"));
	*(void **)__this = SelectedNode_obj::_hx_vtable;
	__this->__construct(component);
	return __this;
}

SelectedNode_obj::SelectedNode_obj()
{
}

::hx::Val SelectedNode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"validateData") ) { return ::hx::Val( validateData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SelectedNode_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SelectedNode_obj_sStaticStorageInfo = 0;
#endif

static ::String SelectedNode_obj_sMemberFields[] = {
	HX_("validateData",e0,55,63,96),
	::String(null()) };

::hx::Class SelectedNode_obj::__mClass;

void SelectedNode_obj::__register()
{
	SelectedNode_obj _hx_dummy;
	SelectedNode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ui.containers._TreeView.SelectedNode",33,21,b3,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SelectedNode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SelectedNode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SelectedNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SelectedNode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ui
} // end namespace containers
} // end namespace _TreeView
