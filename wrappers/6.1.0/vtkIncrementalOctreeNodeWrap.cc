/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkIncrementalOctreeNodeWrap.h"
#include "vtkIdListWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkIncrementalOctreeNodeWrap::ptpl;

VtkIncrementalOctreeNodeWrap::VtkIncrementalOctreeNodeWrap()
{ }

VtkIncrementalOctreeNodeWrap::VtkIncrementalOctreeNodeWrap(vtkSmartPointer<vtkIncrementalOctreeNode> _native)
{ native = _native; }

VtkIncrementalOctreeNodeWrap::~VtkIncrementalOctreeNodeWrap()
{ }

void VtkIncrementalOctreeNodeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkIncrementalOctreeNode").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("IncrementalOctreeNode").ToLocalChecked(), ConstructorGetter);
}

void VtkIncrementalOctreeNodeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkIncrementalOctreeNodeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkIncrementalOctreeNodeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DeleteChildNodes", DeleteChildNodes);
	Nan::SetPrototypeMethod(tpl, "deleteChildNodes", DeleteChildNodes);

	Nan::SetPrototypeMethod(tpl, "ExportAllPointIdsByInsertion", ExportAllPointIdsByInsertion);
	Nan::SetPrototypeMethod(tpl, "exportAllPointIdsByInsertion", ExportAllPointIdsByInsertion);

	Nan::SetPrototypeMethod(tpl, "GetChild", GetChild);
	Nan::SetPrototypeMethod(tpl, "getChild", GetChild);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPoints", GetNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPoints", GetNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "GetPointIdSet", GetPointIdSet);
	Nan::SetPrototypeMethod(tpl, "getPointIdSet", GetPointIdSet);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsLeaf", IsLeaf);
	Nan::SetPrototypeMethod(tpl, "isLeaf", IsLeaf);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

	ptpl.Reset( tpl );
}

void VtkIncrementalOctreeNodeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkIncrementalOctreeNode> native = vtkSmartPointer<vtkIncrementalOctreeNode>::New();
		VtkIncrementalOctreeNodeWrap* obj = new VtkIncrementalOctreeNodeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkIncrementalOctreeNodeWrap::DeleteChildNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeleteChildNodes();
}

void VtkIncrementalOctreeNodeWrap::ExportAllPointIdsByInsertion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ExportAllPointIdsByInsertion(
			(vtkIdList *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::GetChild(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkIncrementalOctreeNode * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetChild(
			info[0]->Int32Value()
		);
			VtkIncrementalOctreeNodeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkIncrementalOctreeNodeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIncrementalOctreeNodeWrap *w = new VtkIncrementalOctreeNodeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkIncrementalOctreeNodeWrap::GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIncrementalOctreeNodeWrap::GetPointIdSet(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	vtkIdList * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPointIdSet();
		VtkIdListWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIdListWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIdListWrap *w = new VtkIdListWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIncrementalOctreeNodeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::IsLeaf(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsLeaf();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkIncrementalOctreeNodeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	vtkIncrementalOctreeNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkIncrementalOctreeNodeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkIncrementalOctreeNodeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalOctreeNodeWrap *w = new VtkIncrementalOctreeNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkIncrementalOctreeNodeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkIncrementalOctreeNode * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkIncrementalOctreeNodeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkIncrementalOctreeNodeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkIncrementalOctreeNodeWrap *w = new VtkIncrementalOctreeNodeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkIncrementalOctreeNodeWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkIncrementalOctreeNodeWrap *wrapper = ObjectWrap::Unwrap<VtkIncrementalOctreeNodeWrap>(info.Holder());
	vtkIncrementalOctreeNode *native = (vtkIncrementalOctreeNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

