// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_HISTOGRAM_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_HISTOGRAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class Histogram; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::Histogram>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/Histogram";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_HISTOGRAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_HISTOGRAM)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_HISTOGRAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/Histogram_BitMetric.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::Histogram : public jni::object_base<"com/sun/java/util/jar/pack/Histogram",
	java::lang::Object>
{
public:

	using BitMetric = Histogram_BitMetric;

	static jni::ref<com::sun::java::util::jar::pack::Histogram> new_object(jni::ref<jni::array<jint>> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::java::util::jar::pack::Histogram> new_object(jni::ref<jni::array<jint>> p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::java::util::jar::pack::Histogram> new_object(jni::ref<jni::array<jni::array<jint>>> p1) { return base_::new_object(p1); }
	jni::ref<jni::array<jni::array<jint>>> getMatrix() { return call_method<"getMatrix", jni::ref<jni::array<jni::array<jint>>>>(); }
	jint getRowCount() { return call_method<"getRowCount", jint>(); }
	jint getRowFrequency(jint p1) { return call_method<"getRowFrequency", jint>(p1); }
	jint getRowLength(jint p1) { return call_method<"getRowLength", jint>(p1); }
	jint getRowValue(jint p1, jint p2) { return call_method<"getRowValue", jint>(p1, p2); }
	jint getRowWeight(jint p1) { return call_method<"getRowWeight", jint>(p1); }
	jint getTotalWeight() { return call_method<"getTotalWeight", jint>(); }
	jint getTotalLength() { return call_method<"getTotalLength", jint>(); }
	jni::ref<jni::array<jint>> getAllValues() { return call_method<"getAllValues", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getAllFrequencies() { return call_method<"getAllFrequencies", jni::ref<jni::array<jint>>>(); }
	jint getFrequency(jint p1) { return call_method<"getFrequency", jint>(p1); }
	jdouble getBitLength(jint p1) { return call_method<"getBitLength", jdouble>(p1); }
	jdouble getRowBitLength(jint p1) { return call_method<"getRowBitLength", jdouble>(p1); }
	jni::ref<com::sun::java::util::jar::pack::Histogram_BitMetric> getBitMetric() { return call_method<"getBitMetric", jni::ref<com::sun::java::util::jar::pack::Histogram_BitMetric>>(); }
	jdouble getBitLength() { return call_method<"getBitLength", jdouble>(); }
	jdouble getBitLength(jni::ref<com::sun::java::util::jar::pack::Histogram_BitMetric> p1) { return call_method<"getBitLength", jdouble>(p1); }
	jni::ref<jni::array<jni::array<jint>>> normalizeMatrix(jni::ref<jni::array<jni::array<jint>>> p1) { return call_method<"normalizeMatrix", jni::ref<jni::array<jni::array<jint>>>>(p1); }
	jni::ref<jni::array<java::lang::String>> getRowTitles(jni::ref<java::lang::String> p1) { return call_method<"getRowTitles", jni::ref<jni::array<java::lang::String>>>(p1); }
	void print(jni::ref<java::io::PrintStream> p1) { return call_method<"print", void>(p1); }
	void print(jni::ref<java::lang::String> p1, jni::ref<java::io::PrintStream> p2) { return call_method<"print", void>(p1, p2); }
	void print(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::String>> p2, jni::ref<java::io::PrintStream> p3) { return call_method<"print", void>(p1, p2, p3); }
	static jni::ref<com::sun::java::util::jar::pack::Histogram> makeByteHistogram(jni::ref<java::io::InputStream> p1) { return call_static_method<"makeByteHistogram", jni::ref<com::sun::java::util::jar::pack::Histogram>>(p1); }

protected:

	Histogram(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_HISTOGRAM