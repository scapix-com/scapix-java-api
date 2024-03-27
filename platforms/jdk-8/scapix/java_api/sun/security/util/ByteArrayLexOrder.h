// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Comparator.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_BYTEARRAYLEXORDER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_BYTEARRAYLEXORDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class ByteArrayLexOrder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::ByteArrayLexOrder>
{
	static constexpr fixed_string class_name = "sun/security/util/ByteArrayLexOrder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Comparator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_BYTEARRAYLEXORDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_BYTEARRAYLEXORDER)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_BYTEARRAYLEXORDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::ByteArrayLexOrder : public jni::object_base<"sun/security/util/ByteArrayLexOrder",
	java::lang::Object,
	java::util::Comparator>
{
public:

	static jni::ref<sun::security::util::ByteArrayLexOrder> new_object() { return base_::new_object(); }
	jint compare(jni::ref<jni::array<jbyte>> p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"compare", jint>(p1, p2); }

protected:

	ByteArrayLexOrder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_BYTEARRAYLEXORDER
