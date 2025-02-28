#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cdf59c2a6fa2817a_58_new,"haxe.ds.StringMap","new",0x0f13f0c6,"haxe.ds.StringMap.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",58,0x969b5cf0)
HX_LOCAL_STACK_FRAME(_hx_pos_cdf59c2a6fa2817a_61_set,"haxe.ds.StringMap","set",0x0f17bc08,"haxe.ds.StringMap.set","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",61,0x969b5cf0)
HX_LOCAL_STACK_FRAME(_hx_pos_cdf59c2a6fa2817a_65_get,"haxe.ds.StringMap","get",0x0f0ea0fc,"haxe.ds.StringMap.get","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",65,0x969b5cf0)
HX_LOCAL_STACK_FRAME(_hx_pos_cdf59c2a6fa2817a_69_exists,"haxe.ds.StringMap","exists",0xd35fc136,"haxe.ds.StringMap.exists","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",69,0x969b5cf0)
HX_LOCAL_STACK_FRAME(_hx_pos_cdf59c2a6fa2817a_73_remove,"haxe.ds.StringMap","remove",0x18083f9e,"haxe.ds.StringMap.remove","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",73,0x969b5cf0)
HX_LOCAL_STACK_FRAME(_hx_pos_cdf59c2a6fa2817a_76_keys,"haxe.ds.StringMap","keys",0x20631ace,"haxe.ds.StringMap.keys","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",76,0x969b5cf0)
HX_LOCAL_STACK_FRAME(_hx_pos_cdf59c2a6fa2817a_81_iterator,"haxe.ds.StringMap","iterator",0x40ccf7c8,"haxe.ds.StringMap.iterator","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",81,0x969b5cf0)
HX_LOCAL_STACK_FRAME(_hx_pos_cdf59c2a6fa2817a_103_clear,"haxe.ds.StringMap","clear",0x9fb0f773,"haxe.ds.StringMap.clear","C:\\HaxeToolkit\\haxe\\std/cpp/_std/haxe/ds/StringMap.hx",103,0x969b5cf0)
namespace haxe{
namespace ds{

void StringMap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cdf59c2a6fa2817a_58_new)
            	}

Dynamic StringMap_obj::__CreateEmpty() { return new StringMap_obj; }

void *StringMap_obj::_hx_vtable = 0;

Dynamic StringMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StringMap_obj > _hx_result = new StringMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4260cd56;
}

static ::haxe::IMap_obj _hx_haxe_ds_StringMap__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::haxe::ds::StringMap_obj::get_a7a2487a,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::haxe::ds::StringMap_obj::set_dca24b06,
};

void StringMap_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}

 ::Dynamic StringMap_obj::get_a7a2487a( ::Dynamic k) {
			return get(k);
}
void *StringMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_StringMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void StringMap_obj::set(::String key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_cdf59c2a6fa2817a_61_set)
HXDLIN(  61)		 ::__string_hash_set(HX_MAP_THIS,key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(StringMap_obj,set,(void))

 ::Dynamic StringMap_obj::get(::String key){
            	HX_STACKFRAME(&_hx_pos_cdf59c2a6fa2817a_65_get)
HXDLIN(  65)		return  ::__string_hash_get(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,get,return )

bool StringMap_obj::exists(::String key){
            	HX_STACKFRAME(&_hx_pos_cdf59c2a6fa2817a_69_exists)
HXDLIN(  69)		return  ::__string_hash_exists(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,exists,return )

bool StringMap_obj::remove(::String key){
            	HX_STACKFRAME(&_hx_pos_cdf59c2a6fa2817a_73_remove)
HXDLIN(  73)		return  ::__string_hash_remove(this->h,key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StringMap_obj,remove,return )

 ::Dynamic StringMap_obj::keys(){
            	HX_GC_STACKFRAME(&_hx_pos_cdf59c2a6fa2817a_76_keys)
HXLINE(  77)		::Array< ::String > a =  ::__string_hash_keys(this->h);
HXLINE(  78)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,a);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,keys,return )

 ::Dynamic StringMap_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_cdf59c2a6fa2817a_81_iterator)
HXLINE(  82)		::cpp::VirtualArray a =  ::__string_hash_values(this->h);
HXLINE(  83)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,a);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,iterator,return )

void StringMap_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_cdf59c2a6fa2817a_103_clear)
HXDLIN( 103)		 ::__string_hash_clear(this->h);
            	}


HX_DEFINE_DYNAMIC_FUNC0(StringMap_obj,clear,(void))


::hx::ObjectPtr< StringMap_obj > StringMap_obj::__new() {
	::hx::ObjectPtr< StringMap_obj > __this = new StringMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StringMap_obj > StringMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StringMap_obj *__this = (StringMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringMap_obj), true, "haxe.ds.StringMap"));
	*(void **)__this = StringMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StringMap_obj::StringMap_obj()
{
}

void StringMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StringMap);
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_END_CLASS();
}

void StringMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(h,"h");
}

::hx::Val StringMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return ::hx::Val( h ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StringMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StringMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("h",68,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StringMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(StringMap_obj,h),HX_("h",68,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StringMap_obj_sStaticStorageInfo = 0;
#endif

static ::String StringMap_obj_sMemberFields[] = {
	HX_("h",68,00,00,00),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("exists",dc,1d,e0,bf),
	HX_("remove",44,9c,88,04),
	HX_("keys",f4,e1,06,47),
	HX_("iterator",ee,49,9a,93),
	HX_("clear",8d,71,5b,48),
	::String(null()) };

::hx::Class StringMap_obj::__mClass;

void StringMap_obj::__register()
{
	StringMap_obj _hx_dummy;
	StringMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.StringMap",d4,d5,d6,62);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StringMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StringMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
