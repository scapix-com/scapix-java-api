// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/CharConversionException.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_IO_MALFORMEDBYTESEQUENCEEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_IO_MALFORMEDBYTESEQUENCEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::io { class MalformedByteSequenceException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException";
	using base_classes = std::tuple<scapix::java_api::java::io::CharConversionException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_IO_MALFORMEDBYTESEQUENCEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_IO_MALFORMEDBYTESEQUENCEEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_IO_MALFORMEDBYTESEQUENCEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/io/MalformedByteSequenceException",
	java::io::CharConversionException>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::io::MalformedByteSequenceException> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::MessageFormatter> p1, jni::ref<java::util::Locale> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<jni::array<java::lang::Object>> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jni::ref<java::lang::String> getDomain() { return call_method<"getDomain", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getKey() { return call_method<"getKey", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::Object>> getArguments() { return call_method<"getArguments", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }

protected:

	MalformedByteSequenceException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_IO_MALFORMEDBYTESEQUENCEEXCEPTION
