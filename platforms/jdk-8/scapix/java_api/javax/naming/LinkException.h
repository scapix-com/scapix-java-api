// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/naming/NamingException.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_LINKEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_LINKEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming { class LinkException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::LinkException>
{
	static constexpr fixed_string class_name = "javax/naming/LinkException";
	using base_classes = std::tuple<scapix::java_api::javax::naming::NamingException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_LINKEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_LINKEXCEPTION)
#define SCAPIX_JAVA_API_JAVAX_NAMING_LINKEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/Name.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::LinkException : public jni::object_base<"javax/naming/LinkException",
	javax::naming::NamingException>
{
public:

	static jni::ref<javax::naming::LinkException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<javax::naming::LinkException> new_object() { return base_::new_object(); }
	jni::ref<javax::naming::Name> getLinkResolvedName() { return call_method<"getLinkResolvedName", jni::ref<javax::naming::Name>>(); }
	jni::ref<javax::naming::Name> getLinkRemainingName() { return call_method<"getLinkRemainingName", jni::ref<javax::naming::Name>>(); }
	jni::ref<java::lang::Object> getLinkResolvedObj() { return call_method<"getLinkResolvedObj", jni::ref<java::lang::Object>>(); }
	jni::ref<java::lang::String> getLinkExplanation() { return call_method<"getLinkExplanation", jni::ref<java::lang::String>>(); }
	void setLinkExplanation(jni::ref<java::lang::String> p1) { return call_method<"setLinkExplanation", void>(p1); }
	void setLinkResolvedName(jni::ref<javax::naming::Name> p1) { return call_method<"setLinkResolvedName", void>(p1); }
	void setLinkRemainingName(jni::ref<javax::naming::Name> p1) { return call_method<"setLinkRemainingName", void>(p1); }
	void setLinkResolvedObj(jni::ref<java::lang::Object> p1) { return call_method<"setLinkResolvedObj", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString(jboolean p1) { return call_method<"toString", jni::ref<java::lang::String>>(p1); }

protected:

	LinkException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_LINKEXCEPTION