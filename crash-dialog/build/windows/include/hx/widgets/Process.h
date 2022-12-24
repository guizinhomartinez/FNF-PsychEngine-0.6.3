#ifndef INCLUDED_hx_widgets_Process
#define INCLUDED_hx_widgets_Process

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hx_widgets_EvtHandler
#include <hx/widgets/EvtHandler.h>
#endif
#ifndef INCLUDED_7e59142ed5699e1d
#define INCLUDED_7e59142ed5699e1d
#include "wx/process.h"
#endif
HX_DECLARE_CLASS2(hx,widgets,EvtHandler)
HX_DECLARE_CLASS2(hx,widgets,InputStream)
HX_DECLARE_CLASS2(hx,widgets,Object)
HX_DECLARE_CLASS2(hx,widgets,Process)
HX_DECLARE_CLASS2(hx,widgets,StreamBase)
HX_DECLARE_CLASS2(hx,widgets,Trackable)

namespace hx{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Process_obj : public  ::hx::widgets::EvtHandler_obj
{
	public:
		typedef  ::hx::widgets::EvtHandler_obj super;
		typedef Process_obj OBJ_;
		Process_obj();

	public:
		enum { _hx_ClassId = 0x02bb7e68 };

		void __construct(::hx::Null< int >  __o_id,::hx::Null< bool >  __o_create);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="hx.widgets.Process")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"hx.widgets.Process"); }
		static ::hx::ObjectPtr< Process_obj > __new(::hx::Null< int >  __o_id,::hx::Null< bool >  __o_create);
		static ::hx::ObjectPtr< Process_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_id,::hx::Null< bool >  __o_create);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Process_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Process",4f,ca,9b,be); }

		static  ::hx::widgets::Process open(::String cmd);
		static ::Dynamic open_dyn();

		void redirect();
		::Dynamic redirect_dyn();

		 ::hx::widgets::InputStream _inputStream;
		 ::hx::widgets::InputStream inputStream;
		 ::hx::widgets::InputStream get_inputStream();
		::Dynamic get_inputStream_dyn();

		bool isInputAvailable;
		bool get_isInputAvailable();
		::Dynamic get_isInputAvailable_dyn();

		bool isInputOpened;
		bool get_isInputOpened();
		::Dynamic get_isInputOpened_dyn();

		::cpp::Pointer<  wxProcess > processRef;
		::cpp::Pointer<  wxProcess > get_processRef();
		::Dynamic get_processRef_dyn();

};

} // end namespace hx
} // end namespace widgets

#endif /* INCLUDED_hx_widgets_Process */ 
