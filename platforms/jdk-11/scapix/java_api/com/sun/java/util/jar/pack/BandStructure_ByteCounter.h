// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterOutputStream.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_BYTECOUNTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_BYTECOUNTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class BandStructure_ByteCounter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::BandStructure_ByteCounter>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/BandStructure$ByteCounter";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterOutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_BYTECOUNTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_BYTECOUNTER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_BYTECOUNTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::BandStructure_ByteCounter : public jni::object_base<"com/sun/java/util/jar/pack/BandStructure$ByteCounter",
	java::io::FilterOutputStream>
{
public:

	static jni::ref<com::sun::java::util::jar::pack::BandStructure_ByteCounter> new_object(jni::ref<java::io::OutputStream> out) { return base_::new_object(out); }
	jlong getCount() { return call_method<"getCount", jlong>(); }
	void setCount(jlong c) { return call_method<"setCount", void>(c); }
	void write(jint b) { return call_method<"write", void>(b); }
	void write(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"write", void>(b, off, len); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	BandStructure_ByteCounter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_BYTECOUNTER