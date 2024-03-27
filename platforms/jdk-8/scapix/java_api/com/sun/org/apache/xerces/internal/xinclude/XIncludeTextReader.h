// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XINCLUDE_XINCLUDETEXTREADER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XINCLUDE_XINCLUDETEXTREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::xinclude { class XIncludeTextReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::xinclude::XIncludeTextReader>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/xinclude/XIncludeTextReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XINCLUDE_XINCLUDETEXTREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XINCLUDE_XINCLUDETEXTREADER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XINCLUDE_XINCLUDETEXTREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::xinclude::XIncludeTextReader : public jni::object_base<"com/sun/org/apache/xerces/internal/xinclude/XIncludeTextReader",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::xinclude::XIncludeTextReader> new_object(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource> p1, jni::ref<com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler> p2, jint p3) { return base_::new_object(p1, p2, p3); }
	void setErrorReporter(jni::ref<com::sun::org::apache::xerces::internal::impl::XMLErrorReporter> p1) { return call_method<"setErrorReporter", void>(p1); }
	void parse() { return call_method<"parse", void>(); }
	void setInputSource(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource> p1) { return call_method<"setInputSource", void>(p1); }
	void close() { return call_method<"close", void>(); }

protected:

	XIncludeTextReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_XINCLUDE_XINCLUDETEXTREADER