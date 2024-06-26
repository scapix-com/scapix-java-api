// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java/util/jar/pack/BandStructure_Band.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_BYTEBAND_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_BYTEBAND_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class BandStructure_ByteBand; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::BandStructure_ByteBand>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/BandStructure$ByteBand";
	using base_classes = std::tuple<scapix::java_api::com::sun::java::util::jar::pack::BandStructure_Band>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_BYTEBAND_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_BYTEBAND)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_BYTEBAND

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/BandStructure.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::BandStructure_ByteBand : public jni::object_base<"com/sun/java/util/jar/pack/BandStructure$ByteBand",
	com::sun::java::util::jar::pack::BandStructure_Band>
{
public:

	static jni::ref<com::sun::java::util::jar::pack::BandStructure_ByteBand> new_object(jni::ref<com::sun::java::util::jar::pack::BandStructure> this_0, jni::ref<java::lang::String> name) { return base_::new_object(this_0, name); }
	jint capacity() { return call_method<"capacity", jint>(); }
	void destroy() { return call_method<"destroy", void>(); }
	jint length() { return call_method<"length", jint>(); }
	void reset() { return call_method<"reset", void>(); }
	void writeDataTo(jni::ref<java::io::OutputStream> out) { return call_method<"writeDataTo", void>(out); }
	void readDataFrom(jni::ref<java::io::InputStream> in) { return call_method<"readDataFrom", void>(in); }
	void readyToDisburse() { return call_method<"readyToDisburse", void>(); }
	void doneDisbursing() { return call_method<"doneDisbursing", void>(); }
	void setInputStreamFrom(jni::ref<java::io::InputStream> in) { return call_method<"setInputStreamFrom", void>(in); }
	jni::ref<java::io::OutputStream> collectorStream() { return call_method<"collectorStream", jni::ref<java::io::OutputStream>>(); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	jint getByte() { return call_method<"getByte", jint>(); }
	void putByte(jint b) { return call_method<"putByte", void>(b); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	BandStructure_ByteBand(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_BANDSTRUCTURE_BYTEBAND
