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
	static jint primaryOrder(jint order) { return call_static_method<"primaryOrder", jint>(order); }
	static jshort secondaryOrder(jint order) { return call_static_method<"secondaryOrder", jshort>(order); }
	static jshort tertiaryOrder(jint order) { return call_static_method<"tertiaryOrder", jshort>(order); }
	jint getOffset() { return call_method<"getOffset", jint>(); }
	void setOffset(jint newOffset) { return call_method<"setOffset", void>(newOffset); }
	jint getMaxExpansion(jint order) { return call_method<"getMaxExpansion", jint>(order); }
	void setText(jni::ref<java::lang::String> source) { return call_method<"setText", void>(source); }
	void setText(jni::ref<java::text::CharacterIterator> source) { return call_method<"setText", void>(source); }

protected:

	CollationElementIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_COLLATIONELEMENTITERATOR