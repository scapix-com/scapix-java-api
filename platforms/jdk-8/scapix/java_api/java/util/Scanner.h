// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/io/Closeable.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_SCANNER_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_SCANNER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Scanner; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Scanner>
{
	static constexpr fixed_string class_name = "java/util/Scanner";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator, scapix::java_api::java::io::Closeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SCANNER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_SCANNER)
#define SCAPIX_JAVA_API_JAVA_UTIL_SCANNER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/IOException.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/Readable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigDecimal.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/nio/channels/ReadableByteChannel.h>
#include <scapix/java_api/java/nio/file/Path.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/regex/MatchResult.h>
#include <scapix/java_api/java/util/regex/Pattern.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Scanner : public jni::object_base<"java/util/Scanner",
	java::lang::Object,
	java::util::Iterator,
	java::io::Closeable>
{
public:

	static jni::ref<java::util::Scanner> new_object(jni::ref<java::lang::Readable> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::Scanner> new_object(jni::ref<java::io::InputStream> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::Scanner> new_object(jni::ref<java::io::InputStream> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::util::Scanner> new_object(jni::ref<java::io::File> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::Scanner> new_object(jni::ref<java::io::File> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::util::Scanner> new_object(jni::ref<java::nio::file::Path> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::Scanner> new_object(jni::ref<java::nio::file::Path> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::util::Scanner> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::Scanner> new_object(jni::ref<java::nio::channels::ReadableByteChannel> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::Scanner> new_object(jni::ref<java::nio::channels::ReadableByteChannel> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::io::IOException> ioException() { return call_method<"ioException", jni::ref<java::io::IOException>>(); }
	jni::ref<java::util::regex::Pattern> delimiter() { return call_method<"delimiter", jni::ref<java::util::regex::Pattern>>(); }
	jni::ref<java::util::Scanner> useDelimiter(jni::ref<java::util::regex::Pattern> p1) { return call_method<"useDelimiter", jni::ref<java::util::Scanner>>(p1); }
	jni::ref<java::util::Scanner> useDelimiter(jni::ref<java::lang::String> p1) { return call_method<"useDelimiter", jni::ref<java::util::Scanner>>(p1); }
	jni::ref<java::util::Locale> locale() { return call_method<"locale", jni::ref<java::util::Locale>>(); }
	jni::ref<java::util::Scanner> useLocale(jni::ref<java::util::Locale> p1) { return call_method<"useLocale", jni::ref<java::util::Scanner>>(p1); }
	jint radix() { return call_method<"radix", jint>(); }
	jni::ref<java::util::Scanner> useRadix(jint p1) { return call_method<"useRadix", jni::ref<java::util::Scanner>>(p1); }
	jni::ref<java::util::regex::MatchResult> match() { return call_method<"match", jni::ref<java::util::regex::MatchResult>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<java::lang::String> next() { return call_method<"next", jni::ref<java::lang::String>>(); }
	void remove() { return call_method<"remove", void>(); }
	jboolean hasNext(jni::ref<java::lang::String> p1) { return call_method<"hasNext", jboolean>(p1); }
	jni::ref<java::lang::String> next(jni::ref<java::lang::String> p1) { return call_method<"next", jni::ref<java::lang::String>>(p1); }
	jboolean hasNext(jni::ref<java::util::regex::Pattern> p1) { return call_method<"hasNext", jboolean>(p1); }
	jni::ref<java::lang::String> next(jni::ref<java::util::regex::Pattern> p1) { return call_method<"next", jni::ref<java::lang::String>>(p1); }
	jboolean hasNextLine() { return call_method<"hasNextLine", jboolean>(); }
	jni::ref<java::lang::String> nextLine() { return call_method<"nextLine", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> findInLine(jni::ref<java::lang::String> p1) { return call_method<"findInLine", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> findInLine(jni::ref<java::util::regex::Pattern> p1) { return call_method<"findInLine", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> findWithinHorizon(jni::ref<java::lang::String> p1, jint p2) { return call_method<"findWithinHorizon", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::lang::String> findWithinHorizon(jni::ref<java::util::regex::Pattern> p1, jint p2) { return call_method<"findWithinHorizon", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::util::Scanner> skip(jni::ref<java::util::regex::Pattern> p1) { return call_method<"skip", jni::ref<java::util::Scanner>>(p1); }
	jni::ref<java::util::Scanner> skip(jni::ref<java::lang::String> p1) { return call_method<"skip", jni::ref<java::util::Scanner>>(p1); }
	jboolean hasNextBoolean() { return call_method<"hasNextBoolean", jboolean>(); }
	jboolean nextBoolean() { return call_method<"nextBoolean", jboolean>(); }
	jboolean hasNextByte() { return call_method<"hasNextByte", jboolean>(); }
	jboolean hasNextByte(jint p1) { return call_method<"hasNextByte", jboolean>(p1); }
	jbyte nextByte() { return call_method<"nextByte", jbyte>(); }
	jbyte nextByte(jint p1) { return call_method<"nextByte", jbyte>(p1); }
	jboolean hasNextShort() { return call_method<"hasNextShort", jboolean>(); }
	jboolean hasNextShort(jint p1) { return call_method<"hasNextShort", jboolean>(p1); }
	jshort nextShort() { return call_method<"nextShort", jshort>(); }
	jshort nextShort(jint p1) { return call_method<"nextShort", jshort>(p1); }
	jboolean hasNextInt() { return call_method<"hasNextInt", jboolean>(); }
	jboolean hasNextInt(jint p1) { return call_method<"hasNextInt", jboolean>(p1); }
	jint nextInt() { return call_method<"nextInt", jint>(); }
	jint nextInt(jint p1) { return call_method<"nextInt", jint>(p1); }
	jboolean hasNextLong() { return call_method<"hasNextLong", jboolean>(); }
	jboolean hasNextLong(jint p1) { return call_method<"hasNextLong", jboolean>(p1); }
	jlong nextLong() { return call_method<"nextLong", jlong>(); }
	jlong nextLong(jint p1) { return call_method<"nextLong", jlong>(p1); }
	jboolean hasNextFloat() { return call_method<"hasNextFloat", jboolean>(); }
	jfloat nextFloat() { return call_method<"nextFloat", jfloat>(); }
	jboolean hasNextDouble() { return call_method<"hasNextDouble", jboolean>(); }
	jdouble nextDouble() { return call_method<"nextDouble", jdouble>(); }
	jboolean hasNextBigInteger() { return call_method<"hasNextBigInteger", jboolean>(); }
	jboolean hasNextBigInteger(jint p1) { return call_method<"hasNextBigInteger", jboolean>(p1); }
	jni::ref<java::math::BigInteger> nextBigInteger() { return call_method<"nextBigInteger", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::math::BigInteger> nextBigInteger(jint p1) { return call_method<"nextBigInteger", jni::ref<java::math::BigInteger>>(p1); }
	jboolean hasNextBigDecimal() { return call_method<"hasNextBigDecimal", jboolean>(); }
	jni::ref<java::math::BigDecimal> nextBigDecimal() { return call_method<"nextBigDecimal", jni::ref<java::math::BigDecimal>>(); }
	jni::ref<java::util::Scanner> reset() { return call_method<"reset", jni::ref<java::util::Scanner>>(); }

protected:

	Scanner(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_SCANNER
