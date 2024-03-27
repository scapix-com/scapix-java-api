// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/Reader.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_XML_IMPL_READERUTF16_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_XML_IMPL_READERUTF16_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::util::xml::impl { class ReaderUTF16; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::util::xml::impl::ReaderUTF16>
{
	static constexpr fixed_string class_name = "jdk/internal/util/xml/impl/ReaderUTF16";
	using base_classes = std::tuple<scapix::java_api::java::io::Reader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_XML_IMPL_READERUTF16_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_XML_IMPL_READERUTF16)
#define SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_XML_IMPL_READERUTF16

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::util::xml::impl::ReaderUTF16 : public jni::object_base<"jdk/internal/util/xml/impl/ReaderUTF16",
	java::io::Reader>
{
public:

	static jni::ref<jdk::internal::util::xml::impl::ReaderUTF16> new_object(jni::ref<java::io::InputStream> is, jchar bo) { return base_::new_object(is, bo); }
	jint read(jni::ref<jni::array<jchar>> cbuf, jint off, jint len) { return call_method<"read", jint>(cbuf, off, len); }
	jint read() { return call_method<"read", jint>(); }
	void close() { return call_method<"close", void>(); }

protected:

	ReaderUTF16(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_UTIL_XML_IMPL_READERUTF16
