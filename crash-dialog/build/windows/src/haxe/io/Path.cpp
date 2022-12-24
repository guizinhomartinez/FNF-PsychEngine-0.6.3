#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_210_normalize,"haxe.io.Path","normalize",0x585a68e4,"haxe.io.Path.normalize","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",210,0x4f1aa280)
static const ::String _hx_array_data_4ec6cf05_3[] = {
	HX_("/",2f,00,00,00),
};
static const ::String _hx_array_data_4ec6cf05_4[] = {
	HX_(":",3a,00,00,00),
};
static const ::String _hx_array_data_4ec6cf05_5[] = {
	HX_("/",2f,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_271_addTrailingSlash,"haxe.io.Path","addTrailingSlash",0x8b4f8e69,"haxe.io.Path.addTrailingSlash","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",271,0x4f1aa280)
HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_299_removeTrailingSlashes,"haxe.io.Path","removeTrailingSlashes",0x2dc73462,"haxe.io.Path.removeTrailingSlashes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",299,0x4f1aa280)
namespace haxe{
namespace io{

void Path_obj::__construct() { }

Dynamic Path_obj::__CreateEmpty() { return new Path_obj; }

void *Path_obj::_hx_vtable = 0;

Dynamic Path_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Path_obj > _hx_result = new Path_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Path_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x026896d9;
}

::String Path_obj::normalize(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_c76bafa893b9a603_210_normalize)
HXLINE( 211)		::String slash = HX_("/",2f,00,00,00);
HXLINE( 212)		path = path.split(HX_("\\",5c,00,00,00))->join(slash);
HXLINE( 213)		if ((path == slash)) {
HXLINE( 214)			return slash;
            		}
HXLINE( 216)		::Array< ::String > target = ::Array_obj< ::String >::__new(0);
HXLINE( 218)		{
HXLINE( 218)			int _g = 0;
HXDLIN( 218)			::Array< ::String > _g1 = path.split(slash);
HXDLIN( 218)			while((_g < _g1->length)){
HXLINE( 218)				::String token = _g1->__get(_g);
HXDLIN( 218)				_g = (_g + 1);
HXLINE( 219)				bool _hx_tmp;
HXDLIN( 219)				bool _hx_tmp1;
HXDLIN( 219)				if ((token == HX_("..",40,28,00,00))) {
HXLINE( 219)					_hx_tmp1 = (target->length > 0);
            				}
            				else {
HXLINE( 219)					_hx_tmp1 = false;
            				}
HXDLIN( 219)				if (_hx_tmp1) {
HXLINE( 219)					_hx_tmp = (target->__get((target->length - 1)) != HX_("..",40,28,00,00));
            				}
            				else {
HXLINE( 219)					_hx_tmp = false;
            				}
HXDLIN( 219)				if (_hx_tmp) {
HXLINE( 220)					target->pop();
            				}
            				else {
HXLINE( 221)					if ((token == HX_("",00,00,00,00))) {
HXLINE( 222)						bool _hx_tmp;
HXDLIN( 222)						if ((target->length <= 0)) {
HXLINE( 222)							_hx_tmp = ::hx::IsEq( path.charCodeAt(0),47 );
            						}
            						else {
HXLINE( 222)							_hx_tmp = true;
            						}
HXDLIN( 222)						if (_hx_tmp) {
HXLINE( 223)							target->push(token);
            						}
            					}
            					else {
HXLINE( 225)						if ((token != HX_(".",2e,00,00,00))) {
HXLINE( 226)							target->push(token);
            						}
            					}
            				}
            			}
            		}
HXLINE( 230)		::String tmp = target->join(slash);
HXLINE( 231)		 ::StringBuf acc =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 232)		bool colon = false;
HXLINE( 233)		bool slashes = false;
HXLINE( 235)		{
HXLINE( 235)			int _g2_offset = 0;
HXDLIN( 235)			::String _g2_s = tmp;
HXDLIN( 235)			while((_g2_offset < _g2_s.length)){
HXLINE( 235)				::String s = _g2_s;
HXDLIN( 235)				_g2_offset = (_g2_offset + 1);
HXDLIN( 235)				int index = (_g2_offset - 1);
HXDLIN( 235)				int c = s.cca(index);
HXDLIN( 235)				bool _hx_tmp;
HXDLIN( 235)				if ((c >= 55296)) {
HXLINE( 235)					_hx_tmp = (c <= 56319);
            				}
            				else {
HXLINE( 235)					_hx_tmp = false;
            				}
HXDLIN( 235)				if (_hx_tmp) {
HXLINE( 635)					c = (((c - 55232) << 10) | (s.cca((index + 1)) & 1023));
            				}
HXLINE( 235)				int c1 = c;
HXDLIN( 235)				if ((c1 >= 65536)) {
HXLINE( 235)					_g2_offset = (_g2_offset + 1);
            				}
HXDLIN( 235)				int c2 = c1;
HXLINE( 236)				switch((int)(c2)){
            					case (int)47: {
HXLINE( 244)						if (!(colon)) {
HXLINE( 245)							slashes = true;
            						}
            						else {
HXLINE( 246)							int i = c2;
HXDLIN( 246)							{
HXLINE( 247)								colon = false;
HXLINE( 248)								if (slashes) {
HXLINE( 249)									{
HXLINE( 249)										if (::hx::IsNotNull( acc->charBuf )) {
HXLINE( 249)											acc->flush();
            										}
HXDLIN( 249)										if (::hx::IsNull( acc->b )) {
HXLINE( 249)											acc->b = ::Array_obj< ::String >::fromData( _hx_array_data_4ec6cf05_3,1);
            										}
            										else {
HXLINE( 249)											acc->b->push(HX_("/",2f,00,00,00));
            										}
            									}
HXLINE( 250)									slashes = false;
            								}
HXLINE( 252)								if ((i >= 127)) {
HXLINE( 252)									::String x = ::String::fromCharCode(i);
HXDLIN( 252)									if (::hx::IsNotNull( acc->charBuf )) {
HXLINE( 252)										acc->flush();
            									}
HXDLIN( 252)									if (::hx::IsNull( acc->b )) {
HXLINE( 252)										acc->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            									}
            									else {
HXLINE( 252)										::Array< ::String > acc1 = acc->b;
HXDLIN( 252)										acc1->push(::Std_obj::string(x));
            									}
            								}
            								else {
HXLINE( 252)									if (::hx::IsNull( acc->charBuf )) {
HXLINE( 252)										acc->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 252)									acc->charBuf->push(i);
            								}
            							}
            						}
            					}
            					break;
            					case (int)58: {
HXLINE( 242)						{
HXLINE( 242)							if (::hx::IsNotNull( acc->charBuf )) {
HXLINE( 242)								acc->flush();
            							}
HXDLIN( 242)							if (::hx::IsNull( acc->b )) {
HXLINE( 242)								acc->b = ::Array_obj< ::String >::fromData( _hx_array_data_4ec6cf05_4,1);
            							}
            							else {
HXLINE( 242)								acc->b->push(HX_(":",3a,00,00,00));
            							}
            						}
HXLINE( 243)						colon = true;
            					}
            					break;
            					default:{
HXLINE( 246)						int i = c2;
HXDLIN( 246)						{
HXLINE( 247)							colon = false;
HXLINE( 248)							if (slashes) {
HXLINE( 249)								{
HXLINE( 249)									if (::hx::IsNotNull( acc->charBuf )) {
HXLINE( 249)										acc->flush();
            									}
HXDLIN( 249)									if (::hx::IsNull( acc->b )) {
HXLINE( 249)										acc->b = ::Array_obj< ::String >::fromData( _hx_array_data_4ec6cf05_5,1);
            									}
            									else {
HXLINE( 249)										acc->b->push(HX_("/",2f,00,00,00));
            									}
            								}
HXLINE( 250)								slashes = false;
            							}
HXLINE( 252)							if ((i >= 127)) {
HXLINE( 252)								::String x = ::String::fromCharCode(i);
HXDLIN( 252)								if (::hx::IsNotNull( acc->charBuf )) {
HXLINE( 252)									acc->flush();
            								}
HXDLIN( 252)								if (::hx::IsNull( acc->b )) {
HXLINE( 252)									acc->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 252)									::Array< ::String > acc1 = acc->b;
HXDLIN( 252)									acc1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE( 252)								if (::hx::IsNull( acc->charBuf )) {
HXLINE( 252)									acc->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 252)								acc->charBuf->push(i);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 256)		return acc->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,normalize,return )

::String Path_obj::addTrailingSlash(::String path){
            	HX_STACKFRAME(&_hx_pos_c76bafa893b9a603_271_addTrailingSlash)
HXLINE( 272)		if ((path.length == 0)) {
HXLINE( 273)			return HX_("/",2f,00,00,00);
            		}
HXLINE( 274)		int c1 = path.lastIndexOf(HX_("/",2f,00,00,00),null());
HXLINE( 275)		int c2 = path.lastIndexOf(HX_("\\",5c,00,00,00),null());
HXLINE( 276)		if ((c1 < c2)) {
HXLINE( 277)			if ((c2 != (path.length - 1))) {
HXLINE( 278)				return (path + HX_("\\",5c,00,00,00));
            			}
            			else {
HXLINE( 280)				return path;
            			}
            		}
            		else {
HXLINE( 282)			if ((c1 != (path.length - 1))) {
HXLINE( 283)				return (path + HX_("/",2f,00,00,00));
            			}
            			else {
HXLINE( 285)				return path;
            			}
            		}
HXLINE( 276)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,addTrailingSlash,return )

::String Path_obj::removeTrailingSlashes(::String path){
            	HX_STACKFRAME(&_hx_pos_c76bafa893b9a603_299_removeTrailingSlashes)
HXLINE( 300)		while(true){
HXLINE( 301)			 ::Dynamic _g = path.charCodeAt((path.length - 1));
HXDLIN( 301)			if (::hx::IsNull( _g )) {
HXLINE( 305)				goto _hx_goto_7;
            			}
            			else {
HXLINE( 301)				 ::Dynamic _hx_switch_0 = _g;
            				if (  (_hx_switch_0==47) ||  (_hx_switch_0==92) ){
HXLINE( 303)					path = path.substr(0,-1);
HXDLIN( 303)					goto _hx_goto_8;
            				}
            				/* default */{
HXLINE( 305)					goto _hx_goto_7;
            				}
            				_hx_goto_8:;
            			}
            		}
            		_hx_goto_7:;
HXLINE( 308)		return path;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,removeTrailingSlashes,return )


Path_obj::Path_obj()
{
}

bool Path_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { outValue = normalize_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addTrailingSlash") ) { outValue = addTrailingSlash_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeTrailingSlashes") ) { outValue = removeTrailingSlashes_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Path_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Path_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Path_obj::__mClass;

static ::String Path_obj_sStaticFields[] = {
	HX_("normalize",8d,37,a1,ab),
	HX_("addTrailingSlash",e0,d6,eb,26),
	HX_("removeTrailingSlashes",8b,dc,1d,43),
	::String(null())
};

void Path_obj::__register()
{
	Path_obj _hx_dummy;
	Path_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.io.Path",05,cf,c6,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Path_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Path_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Path_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Path_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Path_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
