// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_CORBA_BRIDGE_FWD
#define SCAPIX_JAVA_API_SUN_CORBA_BRIDGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::corba { class Bridge; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::corba::Bridge>
{
	static constexpr fixed_string class_name = "sun/corba/Bridge";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_CORBA_BRIDGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_CORBA_BRIDGE)
#define SCAPIX_JAVA_API_SUN_CORBA_BRIDGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/lang/reflect/Constructor.h>
#include <scapix/java_api/java/lang/reflect/Field.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::corba::Bridge : public jni::object_base<"sun/corba/Bridge",
	java::lang::Object>
{
public:

	static jlong INVALID_FIELD_OFFSET() { return get_static_field<"INVALID_FIELD_OFFSET", jlong>(); }

	static jni::ref<sun::corba::Bridge> get() { return call_static_method<"get", jni::ref<sun::corba::Bridge>>(); }
	jni::ref<java::lang::ClassLoader> getLatestUserDefinedLoader() { return call_method<"getLatestUserDefinedLoader", jni::ref<java::lang::ClassLoader>>(); }
	jint getInt(jni::ref<java::lang::Object> p1, jlong p2) { return call_method<"getInt", jint>(p1, p2); }
	void putInt(jni::ref<java::lang::Object> p1, jlong p2, jint p3) { return call_method<"putInt", void>(p1, p2, p3); }
	jni::ref<java::lang::Object> getObject(jni::ref<java::lang::Object> p1, jlong p2) { return call_method<"getObject", jni::ref<java::lang::Object>>(p1, p2); }
	void putObject(jni::ref<java::lang::Object> p1, jlong p2, jni::ref<java::lang::Object> p3) { return call_method<"putObject", void>(p1, p2, p3); }
	jboolean getBoolean(jni::ref<java::lang::Object> p1, jlong p2) { return call_method<"getBoolean", jboolean>(p1, p2); }
	void putBoolean(jni::ref<java::lang::Object> p1, jlong p2, jboolean p3) { return call_method<"putBoolean", void>(p1, p2, p3); }
	jbyte getByte(jni::ref<java::lang::Object> p1, jlong p2) { return call_method<"getByte", jbyte>(p1, p2); }
	void putByte(jni::ref<java::lang::Object> p1, jlong p2, jbyte p3) { return call_method<"putByte", void>(p1, p2, p3); }
	jshort getShort(jni::ref<java::lang::Object> p1, jlong p2) { return call_method<"getShort", jshort>(p1, p2); }
	void putShort(jni::ref<java::lang::Object> p1, jlong p2, jshort p3) { return call_method<"putShort", void>(p1, p2, p3); }
	jchar getChar(jni::ref<java::lang::Object> p1, jlong p2) { return call_method<"getChar", jchar>(p1, p2); }
	void putChar(jni::ref<java::lang::Object> p1, jlong p2, jchar p3) { return call_method<"putChar", void>(p1, p2, p3); }
	jlong getLong(jni::ref<java::lang::Object> p1, jlong p2) { return call_method<"getLong", jlong>(p1, p2); }
	void putLong(jni::ref<java::lang::Object> p1, jlong p2, jlong p3) { return call_method<"putLong", void>(p1, p2, p3); }
	jfloat getFloat(jni::ref<java::lang::Object> p1, jlong p2) { return call_method<"getFloat", jfloat>(p1, p2); }
	void putFloat(jni::ref<java::lang::Object> p1, jlong p2, jfloat p3) { return call_method<"putFloat", void>(p1, p2, p3); }
	jdouble getDouble(jni::ref<java::lang::Object> p1, jlong p2) { return call_method<"getDouble", jdouble>(p1, p2); }
	void putDouble(jni::ref<java::lang::Object> p1, jlong p2, jdouble p3) { return call_method<"putDouble", void>(p1, p2, p3); }
	jlong objectFieldOffset(jni::ref<java::lang::reflect::Field> p1) { return call_method<"objectFieldOffset", jlong>(p1); }
	void throwException(jni::ref<java::lang::Throwable> p1) { return call_method<"throwException", void>(p1); }
	jni::ref<java::lang::reflect::Constructor> newConstructorForSerialization(jni::ref<java::lang::Class> p1, jni::ref<java::lang::reflect::Constructor> p2) { return call_method<"newConstructorForSerialization", jni::ref<java::lang::reflect::Constructor>>(p1, p2); }

protected:

	Bridge(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_CORBA_BRIDGE
