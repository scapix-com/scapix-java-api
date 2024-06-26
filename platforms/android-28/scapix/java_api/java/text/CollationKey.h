// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONKEY_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class CollationKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::CollationKey>
{
	static constexpr fixed_string class_name = "java/text/CollationKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONKEY)
#define SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::CollationKey : public jni::object_base<"java/text/CollationKey",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	jint compareTo(jni::ref<java::text::CollationKey> p1) { return call_method<"compareTo", jint>(p1); }
	jni::ref<java::lang::String> getSourceString() { return call_method<"getSourceString", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> toByteArray() { return call_method<"toByteArray", jni::ref<jni::array<jbyte>>>(); }

protected:

	CollationKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONKEY
