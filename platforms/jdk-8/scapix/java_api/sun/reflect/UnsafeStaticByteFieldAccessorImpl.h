// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/reflect/UnsafeStaticFieldAccessorImpl.h>

#ifndef SCAPIX_JAVA_API_SUN_REFLECT_UNSAFESTATICBYTEFIELDACCESSORIMPL_FWD
#define SCAPIX_JAVA_API_SUN_REFLECT_UNSAFESTATICBYTEFIELDACCESSORIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::reflect { class UnsafeStaticByteFieldAccessorImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::reflect::UnsafeStaticByteFieldAccessorImpl>
{
	static constexpr fixed_string class_name = "sun/reflect/UnsafeStaticByteFieldAccessorImpl";
	using base_classes = std::tuple<scapix::java_api::sun::reflect::UnsafeStaticFieldAccessorImpl>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_UNSAFESTATICBYTEFIELDACCESSORIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_REFLECT_UNSAFESTATICBYTEFIELDACCESSORIMPL)
#define SCAPIX_JAVA_API_SUN_REFLECT_UNSAFESTATICBYTEFIELDACCESSORIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::reflect::UnsafeStaticByteFieldAccessorImpl : public jni::object_base<"sun/reflect/UnsafeStaticByteFieldAccessorImpl",
	sun::reflect::UnsafeStaticFieldAccessorImpl>
{
public:

	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jboolean getBoolean(jni::ref<java::lang::Object> p1) { return call_method<"getBoolean", jboolean>(p1); }
	jbyte getByte(jni::ref<java::lang::Object> p1) { return call_method<"getByte", jbyte>(p1); }
	jchar getChar(jni::ref<java::lang::Object> p1) { return call_method<"getChar", jchar>(p1); }
	jshort getShort(jni::ref<java::lang::Object> p1) { return call_method<"getShort", jshort>(p1); }
	jint getInt(jni::ref<java::lang::Object> p1) { return call_method<"getInt", jint>(p1); }
	jlong getLong(jni::ref<java::lang::Object> p1) { return call_method<"getLong", jlong>(p1); }
	jfloat getFloat(jni::ref<java::lang::Object> p1) { return call_method<"getFloat", jfloat>(p1); }
	jdouble getDouble(jni::ref<java::lang::Object> p1) { return call_method<"getDouble", jdouble>(p1); }
	void set(jni::ref<java::lang::Object> p1, jni::ref<java::lang::Object> p2) { return call_method<"set", void>(p1, p2); }
	void setBoolean(jni::ref<java::lang::Object> p1, jboolean p2) { return call_method<"setBoolean", void>(p1, p2); }
	void setByte(jni::ref<java::lang::Object> p1, jbyte p2) { return call_method<"setByte", void>(p1, p2); }
	void setChar(jni::ref<java::lang::Object> p1, jchar p2) { return call_method<"setChar", void>(p1, p2); }
	void setShort(jni::ref<java::lang::Object> p1, jshort p2) { return call_method<"setShort", void>(p1, p2); }
	void setInt(jni::ref<java::lang::Object> p1, jint p2) { return call_method<"setInt", void>(p1, p2); }
	void setLong(jni::ref<java::lang::Object> p1, jlong p2) { return call_method<"setLong", void>(p1, p2); }
	void setFloat(jni::ref<java::lang::Object> p1, jfloat p2) { return call_method<"setFloat", void>(p1, p2); }
	void setDouble(jni::ref<java::lang::Object> p1, jdouble p2) { return call_method<"setDouble", void>(p1, p2); }

protected:

	UnsafeStaticByteFieldAccessorImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_REFLECT_UNSAFESTATICBYTEFIELDACCESSORIMPL
