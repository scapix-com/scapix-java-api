// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/axes/PathComponent.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_LOCPATHITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_LOCPATHITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::axes { class LocPathIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::axes::LocPathIterator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/axes/LocPathIterator";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest, scapix::java_api::java::lang::Cloneable, scapix::java_api::com::sun::org::apache::xml::internal::dtm::DTMIterator, scapix::java_api::java::io::Serializable, scapix::java_api::com::sun::org::apache::xpath::internal::axes::PathComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_LOCPATHITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_LOCPATHITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_LOCPATHITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::axes::LocPathIterator : public jni::object_base<"com/sun/org/apache/xpath/internal/axes/LocPathIterator",
	com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest,
	java::lang::Cloneable,
	com::sun::org::apache::xml::internal::dtm::DTMIterator,
	java::io::Serializable,
	com::sun::org::apache::xpath::internal::axes::PathComponent>
{
public:

	jint m_lastFetched() { return get_field<"m_lastFetched", jint>(); }
	void m_lastFetched(jint v) { set_field<"m_lastFetched", jint>(v); }

	jint getAnalysisBits() { return call_method<"getAnalysisBits", jint>(); }
	void setEnvironment(jni::ref<java::lang::Object> p1) { return call_method<"setEnvironment", void>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTM> getDTM(jint p1) { return call_method<"getDTM", jni::ref<com::sun::org::apache::xml::internal::dtm::DTM>>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> getDTMManager() { return call_method<"getDTMManager", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager>>(); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1); }
	void executeCharsToContentHandler(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jni::ref<org::xml::sax::ContentHandler> p2) { return call_method<"executeCharsToContentHandler", void>(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> asIterator(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jint p2) { return call_method<"asIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator>>(p1, p2); }
	jboolean isNodesetExpr() { return call_method<"isNodesetExpr", jboolean>(); }
	jint asNode(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"asNode", jint>(p1); }
	jboolean bool_(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"bool", jboolean>(p1); }
	void setIsTopLevel(jboolean p1) { return call_method<"setIsTopLevel", void>(p1); }
	jboolean getIsTopLevel() { return call_method<"getIsTopLevel", jboolean>(); }
	void setRoot(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"setRoot", void>(p1, p2); }
	jint getCurrentPos() { return call_method<"getCurrentPos", jint>(); }
	void setShouldCacheNodes(jboolean p1) { return call_method<"setShouldCacheNodes", void>(p1); }
	jboolean isMutable() { return call_method<"isMutable", jboolean>(); }
	void setCurrentPos(jint p1) { return call_method<"setCurrentPos", void>(p1); }
	void incrementCurrentPos() { return call_method<"incrementCurrentPos", void>(); }
	jint size() { return call_method<"size", jint>(); }
	jint item(jint p1) { return call_method<"item", jint>(p1); }
	void setItem(jint p1, jint p2) { return call_method<"setItem", void>(p1, p2); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jboolean isFresh() { return call_method<"isFresh", jboolean>(); }
	jint previousNode() { return call_method<"previousNode", jint>(); }
	jint getWhatToShow() { return call_method<"getWhatToShow", jint>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMFilter> getFilter() { return call_method<"getFilter", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMFilter>>(); }
	jint getRoot() { return call_method<"getRoot", jint>(); }
	jboolean getExpandEntityReferences() { return call_method<"getExpandEntityReferences", jboolean>(); }
	void allowDetachToRelease(jboolean p1) { return call_method<"allowDetachToRelease", void>(p1); }
	void detach() { return call_method<"detach", void>(); }
	void reset() { return call_method<"reset", void>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> cloneWithReset() { return call_method<"cloneWithReset", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator>>(); }
	jint nextNode() { return call_method<"nextNode", jint>(); }
	jint getCurrentNode() { return call_method<"getCurrentNode", jint>(); }
	void runTo(jint p1) { return call_method<"runTo", void>(p1); }
	jboolean getFoundLast() { return call_method<"getFoundLast", jboolean>(); }
	jni::ref<com::sun::org::apache::xpath::internal::XPathContext> getXPathContext() { return call_method<"getXPathContext", jni::ref<com::sun::org::apache::xpath::internal::XPathContext>>(); }
	jint getContext() { return call_method<"getContext", jint>(); }
	jint getCurrentContextNode() { return call_method<"getCurrentContextNode", jint>(); }
	void setCurrentContextNode(jint p1) { return call_method<"setCurrentContextNode", void>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolver> getPrefixResolver() { return call_method<"getPrefixResolver", jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolver>>(); }
	void callVisitors(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::XPathVisitor> p2) { return call_method<"callVisitors", void>(p1, p2); }
	jboolean isDocOrdered() { return call_method<"isDocOrdered", jboolean>(); }
	jint getAxis() { return call_method<"getAxis", jint>(); }
	jint getLastPos(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"getLastPos", jint>(p1); }

protected:

	LocPathIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_LOCPATHITERATOR