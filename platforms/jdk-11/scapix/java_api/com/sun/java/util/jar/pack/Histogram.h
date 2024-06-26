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

	static jni::ref<com::sun::java::util::jar::pack::Histogram> new_object(jni::ref<jni::array<jint>> valueSequence) { return base_::new_object(valueSequence); }
	static jni::ref<com::sun::java::util::jar::pack::Histogram> new_object(jni::ref<jni::array<jint>> valueSequence, jint start, jint end) { return base_::new_object(valueSequence, start, end); }
	static jni::ref<com::sun::java::util::jar::pack::Histogram> new_object(jni::ref<jni::array<jni::array<jint>>> matrix) { return base_::new_object(matrix); }
	jni::ref<jni::array<jni::array<jint>>> getMatrix() { return call_method<"getMatrix", jni::ref<jni::array<jni::array<jint>>>>(); }
	jint getRowCount() { return call_method<"getRowCount", jint>(); }
	jint getRowFrequency(jint rn) { return call_method<"getRowFrequency", jint>(rn); }
	jint getRowLength(jint rn) { return call_method<"getRowLength", jint>(rn); }
	jint getRowValue(jint rn, jint vn) { return call_method<"getRowValue", jint>(rn, vn); }
	jint getRowWeight(jint rn) { return call_method<"getRowWeight", jint>(rn); }
	jint getTotalWeight() { return call_method<"getTotalWeight", jint>(); }
	jint getTotalLength() { return call_method<"getTotalLength", jint>(); }
	jni::ref<jni::array<jint>> getAllValues() { return call_method<"getAllValues", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getAllFrequencies() { return call_method<"getAllFrequencies", jni::ref<jni::array<jint>>>(); }
	jint getFrequency(jint value) { return call_method<"getFrequency", jint>(value); }
	jdouble getBitLength(jint value) { return call_method<"getBitLength", jdouble>(value); }
	jdouble getRowBitLength(jint rn) { return call_method<"getRowBitLength", jdouble>(rn); }
	jni::ref<com::sun::java::util::jar::pack::Histogram_BitMetric> getBitMetric() { return call_method<"getBitMetric", jni::ref<com::sun::java::util::jar::pack::Histogram_BitMetric>>(); }
	jdouble getBitLength() { return call_method<"getBitLength", jdouble>(); }
	jdouble getBitLength(jni::ref<com::sun::java::util::jar::pack::Histogram_BitMetric> len) { return call_method<"getBitLength", jdouble>(len); }
	jni::ref<jni::array<jni::array<jint>>> normalizeMatrix(jni::ref<jni::array<jni::array<jint>>> matrix) { return call_method<"normalizeMatrix", jni::ref<jni::array<jni::array<jint>>>>(matrix); }
	jni::ref<jni::array<java::lang::String>> getRowTitles(jni::ref<java::lang::String> name) { return call_method<"getRowTitles", jni::ref<jni::array<java::lang::String>>>(name); }
	void print(jni::ref<java::io::PrintStream> out) { return call_method<"print", void>(out); }
	void print(jni::ref<java::lang::String> name, jni::ref<java::io::PrintStream> out) { return call_method<"print", void>(name, out); }
	void print(jni::ref<java::lang::String> name, jni::ref<jni::array<java::lang::String>> histTitles, jni::ref<java::io::PrintStream> out) { return call_method<"print", void>(name, histTitles, out); }
	static jni::ref<com::sun::java::util::jar::pack::Histogram> makeByteHistogram(jni::ref<java::io::InputStream> bytes) { return call_static_method<"makeByteHistogram", jni::ref<com::sun::java::util::jar::pack::Histogram>>(bytes); }

protected:

	Histogram(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_HISTOGRAM
