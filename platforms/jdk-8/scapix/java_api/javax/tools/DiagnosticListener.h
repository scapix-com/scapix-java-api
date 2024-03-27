// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_TOOLS_DIAGNOSTICLISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_TOOLS_DIAGNOSTICLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::tools { class DiagnosticListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::tools::DiagnosticListener>
{
	static constexpr fixed_string class_name = "javax/tools/DiagnosticListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_DIAGNOSTICLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_TOOLS_DIAGNOSTICLISTENER)
#define SCAPIX_JAVA_API_JAVAX_TOOLS_DIAGNOSTICLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/tools/Diagnostic.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::tools::DiagnosticListener : public jni::object_base<"javax/tools/DiagnosticListener",
	java::lang::Object>
{
public:

	void report(jni::ref<javax::tools::Diagnostic> p1) { return call_method<"report", void>(p1); }

protected:

	DiagnosticListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_DIAGNOSTICLISTENER