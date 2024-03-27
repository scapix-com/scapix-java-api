// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONELEMENTITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONELEMENTITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class CollationElementIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::CollationElementIterator>
{
	static constexpr fixed_string class_name = "java/text/CollationElementIterator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONELEMENTITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONELEMENTITERATOR)
#define SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONELEMENTITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/CharacterIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::CollationElementIterator : public jni::object_base<"java/text/CollationElementIterator",
	java::lang::Object>
{
public:

	static jint NULLORDER() { return get_static_field<"NULLORDER", jint>(); }

	void reset() { return call_method<"reset", void>(); }
	jint next() { return call_method<"next", jint>(); }
	jint previous() { return call_method<"previous", jint>(); }
	static jint primaryOrder(jint p1) { return call_static_method<"primaryOrder", jint>(p1); }
	static jshort secondaryOrder(jint p1) { return call_static_method<"secondaryOrder", jshort>(p1); }
	static jshort tertiaryOrder(jint p1) { return call_static_method<"tertiaryOrder", jshort>(p1); }
	void setOffset(jint p1) { return call_method<"setOffset", void>(p1); }
	jint getOffset() { return call_method<"getOffset", jint>(); }
	jint getMaxExpansion(jint p1) { return call_method<"getMaxExpansion", jint>(p1); }
	void setText(jni::ref<java::lang::String> p1) { return call_method<"setText", void>(p1); }
	void setText(jni::ref<java::text::CharacterIterator> p1) { return call_method<"setText", void>(p1); }

protected:

	CollationElementIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONELEMENTITERATOR
