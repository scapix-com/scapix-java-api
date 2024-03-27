// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_IETF_JGSS_MESSAGEPROP_FWD
#define SCAPIX_JAVA_API_ORG_IETF_JGSS_MESSAGEPROP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::ietf::jgss { class MessageProp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::ietf::jgss::MessageProp>
{
	static constexpr fixed_string class_name = "org/ietf/jgss/MessageProp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_IETF_JGSS_MESSAGEPROP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_IETF_JGSS_MESSAGEPROP)
#define SCAPIX_JAVA_API_ORG_IETF_JGSS_MESSAGEPROP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::ietf::jgss::MessageProp : public jni::object_base<"org/ietf/jgss/MessageProp",
	java::lang::Object>
{
public:

	static jni::ref<org::ietf::jgss::MessageProp> new_object(jboolean p1) { return base_::new_object(p1); }
	static jni::ref<org::ietf::jgss::MessageProp> new_object(jint p1, jboolean p2) { return base_::new_object(p1, p2); }
	jint getQOP() { return call_method<"getQOP", jint>(); }
	jboolean getPrivacy() { return call_method<"getPrivacy", jboolean>(); }
	void setQOP(jint p1) { return call_method<"setQOP", void>(p1); }
	void setPrivacy(jboolean p1) { return call_method<"setPrivacy", void>(p1); }
	jboolean isDuplicateToken() { return call_method<"isDuplicateToken", jboolean>(); }
	jboolean isOldToken() { return call_method<"isOldToken", jboolean>(); }
	jboolean isUnseqToken() { return call_method<"isUnseqToken", jboolean>(); }
	jboolean isGapToken() { return call_method<"isGapToken", jboolean>(); }
	jint getMinorStatus() { return call_method<"getMinorStatus", jint>(); }
	jni::ref<java::lang::String> getMinorString() { return call_method<"getMinorString", jni::ref<java::lang::String>>(); }
	void setSupplementaryStates(jboolean p1, jboolean p2, jboolean p3, jboolean p4, jint p5, jni::ref<java::lang::String> p6) { return call_method<"setSupplementaryStates", void>(p1, p2, p3, p4, p5, p6); }

protected:

	MessageProp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_IETF_JGSS_MESSAGEPROP