// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/Node.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_PROCESSINGINSTRUCTION_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_PROCESSINGINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom { class ProcessingInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::ProcessingInstruction>
{
	static constexpr fixed_string class_name = "org/w3c/dom/ProcessingInstruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_PROCESSINGINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_PROCESSINGINSTRUCTION)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_PROCESSINGINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::ProcessingInstruction : public jni::object_base<"org/w3c/dom/ProcessingInstruction",
	java::lang::Object,
	org::w3c::dom::Node>
{
public:

	jni::ref<java::lang::String> getTarget() { return call_method<"getTarget", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getData() { return call_method<"getData", jni::ref<java::lang::String>>(); }
	void setData(jni::ref<java::lang::String> p1) { return call_method<"setData", void>(p1); }

protected:

	ProcessingInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_PROCESSINGINSTRUCTION
