// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSEXCEPTION_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom::ls { class LSException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::ls::LSException>
{
	static constexpr fixed_string class_name = "org/w3c/dom/ls/LSException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSEXCEPTION)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::ls::LSException : public jni::object_base<"org/w3c/dom/ls/LSException",
	java::lang::RuntimeException>
{
public:

	static jshort PARSE_ERR() { return get_static_field<"PARSE_ERR", jshort>(); }
	static jshort SERIALIZE_ERR() { return get_static_field<"SERIALIZE_ERR", jshort>(); }
	jshort code() { return get_field<"code", jshort>(); }
	void code(jshort v) { set_field<"code", jshort>(v); }

	static jni::ref<org::w3c::dom::ls::LSException> new_object(jshort code, jni::ref<java::lang::String> message) { return base_::new_object(code, message); }

protected:

	LSException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_LS_LSEXCEPTION
