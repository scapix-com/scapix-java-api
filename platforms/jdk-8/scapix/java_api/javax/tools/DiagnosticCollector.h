// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/tools/DiagnosticListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_TOOLS_DIAGNOSTICCOLLECTOR_FWD
#define SCAPIX_JAVA_API_JAVAX_TOOLS_DIAGNOSTICCOLLECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::tools { class DiagnosticCollector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::tools::DiagnosticCollector>
{
	static constexpr fixed_string class_name = "javax/tools/DiagnosticCollector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::tools::DiagnosticListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_DIAGNOSTICCOLLECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_TOOLS_DIAGNOSTICCOLLECTOR)
#define SCAPIX_JAVA_API_JAVAX_TOOLS_DIAGNOSTICCOLLECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/tools/Diagnostic.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::tools::DiagnosticCollector : public jni::object_base<"javax/tools/DiagnosticCollector",
	java::lang::Object,
	javax::tools::DiagnosticListener>
{
public:

	static jni::ref<javax::tools::DiagnosticCollector> new_object() { return base_::new_object(); }
	void report(jni::ref<javax::tools::Diagnostic> p1) { return call_method<"report", void>(p1); }
	jni::ref<java::util::List> getDiagnostics() { return call_method<"getDiagnostics", jni::ref<java::util::List>>(); }

protected:

	DiagnosticCollector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_TOOLS_DIAGNOSTICCOLLECTOR
