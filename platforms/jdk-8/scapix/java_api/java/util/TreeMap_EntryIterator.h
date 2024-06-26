// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/TreeMap_PrivateEntryIterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_ENTRYITERATOR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_ENTRYITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class TreeMap_EntryIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::TreeMap_EntryIterator>
{
	static constexpr fixed_string class_name = "java/util/TreeMap$EntryIterator";
	using base_classes = std::tuple<scapix::java_api::java::util::TreeMap_PrivateEntryIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_ENTRYITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_ENTRYITERATOR)
#define SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_ENTRYITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map_Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::TreeMap_EntryIterator : public jni::object_base<"java/util/TreeMap$EntryIterator",
	java::util::TreeMap_PrivateEntryIterator>
{
public:

	jni::ref<java::util::Map_Entry> next() { return call_method<"next", jni::ref<java::util::Map_Entry>>(); }

protected:

	TreeMap_EntryIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_TREEMAP_ENTRYITERATOR
