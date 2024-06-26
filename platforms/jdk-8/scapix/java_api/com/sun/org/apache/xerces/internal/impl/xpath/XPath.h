// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath { class XPath; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xpath::XPath>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xpath/XPath";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xpath/XPath_LocationPath.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xpath/XPath_Step.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xpath/XPath_Axis.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xpath/XPath_NodeTest.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xpath::XPath : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xpath/XPath",
	java::lang::Object>
{
public:

	using LocationPath = XPath_LocationPath;
	using Step = XPath_Step;
	using Axis = XPath_Axis;
	using NodeTest = XPath_NodeTest;

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xpath::XPath> new_object(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::NamespaceContext> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::xpath::XPath_LocationPath>> getLocationPaths() { return call_method<"getLocationPaths", jni::ref<jni::array<com::sun::org::apache::xerces::internal::impl::xpath::XPath_LocationPath>>>(); }
	jni::ref<com::sun::org::apache::xerces::internal::impl::xpath::XPath_LocationPath> getLocationPath() { return call_method<"getLocationPath", jni::ref<com::sun::org::apache::xerces::internal::impl::xpath::XPath_LocationPath>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static void main(jni::ref<jni::array<java::lang::String>> p1) { return call_static_method<"main", void>(p1); }

protected:

	XPath(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XPATH_XPATH
