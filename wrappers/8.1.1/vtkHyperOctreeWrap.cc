/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkDataSetWrap.h"
#include "vtkHyperOctreeWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationDoubleVectorKeyWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkHyperOctreeCursorWrap.h"
#include "vtkDataObjectWrap.h"
#include "vtkHyperOctreePointsGrabberWrap.h"
#include "vtkDataSetAttributesWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationVectorWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperOctreeWrap::ptpl;

VtkHyperOctreeWrap::VtkHyperOctreeWrap()
{ }

VtkHyperOctreeWrap::VtkHyperOctreeWrap(vtkSmartPointer<vtkHyperOctree> _native)
{ native = _native; }

VtkHyperOctreeWrap::~VtkHyperOctreeWrap()
{ }

void VtkHyperOctreeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperOctree").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperOctree").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperOctreeWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperOctreeWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkDataSetWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkDataSetWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperOctreeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CollapseTerminalNode", CollapseTerminalNode);
	Nan::SetPrototypeMethod(tpl, "collapseTerminalNode", CollapseTerminalNode);

	Nan::SetPrototypeMethod(tpl, "CopyStructure", CopyStructure);
	Nan::SetPrototypeMethod(tpl, "copyStructure", CopyStructure);

	Nan::SetPrototypeMethod(tpl, "DIMENSION", DIMENSION);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetActualMemorySize", GetActualMemorySize);
	Nan::SetPrototypeMethod(tpl, "getActualMemorySize", GetActualMemorySize);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataObjectType", GetDataObjectType);
	Nan::SetPrototypeMethod(tpl, "getDataObjectType", GetDataObjectType);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetDualGridFlag", GetDualGridFlag);
	Nan::SetPrototypeMethod(tpl, "getDualGridFlag", GetDualGridFlag);

	Nan::SetPrototypeMethod(tpl, "GetLeafData", GetLeafData);
	Nan::SetPrototypeMethod(tpl, "getLeafData", GetLeafData);

	Nan::SetPrototypeMethod(tpl, "GetMaxCellSize", GetMaxCellSize);
	Nan::SetPrototypeMethod(tpl, "getMaxCellSize", GetMaxCellSize);

	Nan::SetPrototypeMethod(tpl, "GetOrigin", GetOrigin);
	Nan::SetPrototypeMethod(tpl, "getOrigin", GetOrigin);

	Nan::SetPrototypeMethod(tpl, "GetPointsOnEdge", GetPointsOnEdge);
	Nan::SetPrototypeMethod(tpl, "getPointsOnEdge", GetPointsOnEdge);

	Nan::SetPrototypeMethod(tpl, "GetPointsOnEdge2D", GetPointsOnEdge2D);
	Nan::SetPrototypeMethod(tpl, "getPointsOnEdge2D", GetPointsOnEdge2D);

	Nan::SetPrototypeMethod(tpl, "GetPointsOnFace", GetPointsOnFace);
	Nan::SetPrototypeMethod(tpl, "getPointsOnFace", GetPointsOnFace);

	Nan::SetPrototypeMethod(tpl, "GetPointsOnParentEdge", GetPointsOnParentEdge);
	Nan::SetPrototypeMethod(tpl, "getPointsOnParentEdge", GetPointsOnParentEdge);

	Nan::SetPrototypeMethod(tpl, "GetPointsOnParentEdge2D", GetPointsOnParentEdge2D);
	Nan::SetPrototypeMethod(tpl, "getPointsOnParentEdge2D", GetPointsOnParentEdge2D);

	Nan::SetPrototypeMethod(tpl, "GetPointsOnParentFaces", GetPointsOnParentFaces);
	Nan::SetPrototypeMethod(tpl, "getPointsOnParentFaces", GetPointsOnParentFaces);

	Nan::SetPrototypeMethod(tpl, "GetSize", GetSize);
	Nan::SetPrototypeMethod(tpl, "getSize", GetSize);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "LEVELS", LEVELS);

	Nan::SetPrototypeMethod(tpl, "NewCellCursor", NewCellCursor);
	Nan::SetPrototypeMethod(tpl, "newCellCursor", NewCellCursor);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SIZES", SIZES);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDimension", SetDimension);
	Nan::SetPrototypeMethod(tpl, "setDimension", SetDimension);

	Nan::SetPrototypeMethod(tpl, "SetDualGridFlag", SetDualGridFlag);
	Nan::SetPrototypeMethod(tpl, "setDualGridFlag", SetDualGridFlag);

	Nan::SetPrototypeMethod(tpl, "SetOrigin", SetOrigin);
	Nan::SetPrototypeMethod(tpl, "setOrigin", SetOrigin);

	Nan::SetPrototypeMethod(tpl, "SetSize", SetSize);
	Nan::SetPrototypeMethod(tpl, "setSize", SetSize);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "SubdivideLeaf", SubdivideLeaf);
	Nan::SetPrototypeMethod(tpl, "subdivideLeaf", SubdivideLeaf);

#ifdef VTK_NODE_PLUS_VTKHYPEROCTREEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHYPEROCTREEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHyperOctreeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperOctree> native = vtkSmartPointer<vtkHyperOctree>::New();
		VtkHyperOctreeWrap* obj = new VtkHyperOctreeWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHyperOctreeWrap::CollapseTerminalNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHyperOctreeCursorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CollapseTerminalNode(
			(vtkHyperOctreeCursor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::CopyStructure(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->CopyStructure(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::DIMENSION(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DIMENSION();
	VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::GetActualMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActualMemorySize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationVectorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationVectorWrap *a0 = ObjectWrap::Unwrap<VtkInformationVectorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			vtkHyperOctree * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetData(
				(vtkInformationVector *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			VtkHyperOctreeWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::FunctionTemplate>(VtkHyperOctreeWrap::ptpl)->GetFunction();
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkHyperOctreeWrap *w = new VtkHyperOctreeWrap();
			w->native = r;
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		vtkHyperOctree * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetData(
			(vtkInformation *) a0->native.GetPointer()
		);
		VtkHyperOctreeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperOctreeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeWrap *w = new VtkHyperOctreeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::GetDataObjectType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataObjectType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeWrap::GetDualGridFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDualGridFlag();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeWrap::GetLeafData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	vtkDataSetAttributes * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeafData();
	VtkDataSetAttributesWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataSetAttributesWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataSetAttributesWrap *w = new VtkDataSetAttributesWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeWrap::GetMaxCellSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxCellSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeWrap::GetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOrigin();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkHyperOctreeWrap::GetPointsOnEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHyperOctreeCursorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkHyperOctreePointsGrabberWrap::ptpl))->HasInstance(info[5]))
						{
							VtkHyperOctreePointsGrabberWrap *a5 = ObjectWrap::Unwrap<VtkHyperOctreePointsGrabberWrap>(info[5]->ToObject());
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->GetPointsOnEdge(
								(vtkHyperOctreeCursor *) a0->native.GetPointer(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								(vtkHyperOctreePointsGrabber *) a5->native.GetPointer()
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

void VtkHyperOctreeWrap::GetPointsOnEdge2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHyperOctreeCursorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkHyperOctreePointsGrabberWrap::ptpl))->HasInstance(info[3]))
				{
					VtkHyperOctreePointsGrabberWrap *a3 = ObjectWrap::Unwrap<VtkHyperOctreePointsGrabberWrap>(info[3]->ToObject());
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->GetPointsOnEdge2D(
						(vtkHyperOctreeCursor *) a0->native.GetPointer(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						(vtkHyperOctreePointsGrabber *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::GetPointsOnFace(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHyperOctreeCursorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkHyperOctreePointsGrabberWrap::ptpl))->HasInstance(info[3]))
				{
					VtkHyperOctreePointsGrabberWrap *a3 = ObjectWrap::Unwrap<VtkHyperOctreePointsGrabberWrap>(info[3]->ToObject());
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->GetPointsOnFace(
						(vtkHyperOctreeCursor *) a0->native.GetPointer(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						(vtkHyperOctreePointsGrabber *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::GetPointsOnParentEdge(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHyperOctreeCursorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsObject() && (Nan::New(VtkHyperOctreePointsGrabberWrap::ptpl))->HasInstance(info[5]))
						{
							VtkHyperOctreePointsGrabberWrap *a5 = ObjectWrap::Unwrap<VtkHyperOctreePointsGrabberWrap>(info[5]->ToObject());
														if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->GetPointsOnParentEdge(
								(vtkHyperOctreeCursor *) a0->native.GetPointer(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								(vtkHyperOctreePointsGrabber *) a5->native.GetPointer()
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

void VtkHyperOctreeWrap::GetPointsOnParentEdge2D(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHyperOctreeCursorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkHyperOctreePointsGrabberWrap::ptpl))->HasInstance(info[3]))
				{
					VtkHyperOctreePointsGrabberWrap *a3 = ObjectWrap::Unwrap<VtkHyperOctreePointsGrabberWrap>(info[3]->ToObject());
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->GetPointsOnParentEdge2D(
						(vtkHyperOctreeCursor *) a0->native.GetPointer(),
						info[1]->Int32Value(),
						info[2]->Int32Value(),
						(vtkHyperOctreePointsGrabber *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::GetPointsOnParentFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkHyperOctreeCursorWrap::ptpl))->HasInstance(info[2]))
			{
				VtkHyperOctreeCursorWrap *a2 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkHyperOctreePointsGrabberWrap::ptpl))->HasInstance(info[3]))
				{
					VtkHyperOctreePointsGrabberWrap *a3 = ObjectWrap::Unwrap<VtkHyperOctreePointsGrabberWrap>(info[3]->ToObject());
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->GetPointsOnParentFaces(
						(int *)(a0->Buffer()->GetContents().Data()),
						info[1]->Int32Value(),
						(vtkHyperOctreeCursor *) a2->native.GetPointer(),
						(vtkHyperOctreePointsGrabber *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkHyperOctreeCursorWrap::ptpl))->HasInstance(info[2]))
			{
				VtkHyperOctreeCursorWrap *a2 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject() && (Nan::New(VtkHyperOctreePointsGrabberWrap::ptpl))->HasInstance(info[3]))
				{
					VtkHyperOctreePointsGrabberWrap *a3 = ObjectWrap::Unwrap<VtkHyperOctreePointsGrabberWrap>(info[3]->ToObject());
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->GetPointsOnParentFaces(
						b0,
						info[1]->Int32Value(),
						(vtkHyperOctreeCursor *) a2->native.GetPointer(),
						(vtkHyperOctreePointsGrabber *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::GetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSize();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkHyperOctreeWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkHyperOctreeWrap::LEVELS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->LEVELS();
	VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeWrap::NewCellCursor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	vtkHyperOctreeCursor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewCellCursor();
	VtkHyperOctreeCursorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperOctreeCursorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeCursorWrap *w = new VtkHyperOctreeCursorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	vtkHyperOctree * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHyperOctreeWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperOctreeWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeWrap *w = new VtkHyperOctreeWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeWrap::SIZES(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	vtkInformationDoubleVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->SIZES();
	VtkInformationDoubleVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationDoubleVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDoubleVectorKeyWrap *w = new VtkInformationDoubleVectorKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkHyperOctree * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkHyperOctreeWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperOctreeWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeWrap *w = new VtkHyperOctreeWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimension(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::SetDualGridFlag(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDualGridFlag(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::SetOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrigin(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOrigin(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetOrigin(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::SetSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSize(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSize(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetSize(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataObjectWrap *a0 = ObjectWrap::Unwrap<VtkDataObjectWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkDataObject *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeWrap::SubdivideLeaf(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeWrap>(info.Holder());
	vtkHyperOctree *native = (vtkHyperOctree *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkHyperOctreeCursorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkHyperOctreeCursorWrap *a0 = ObjectWrap::Unwrap<VtkHyperOctreeCursorWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SubdivideLeaf(
			(vtkHyperOctreeCursor *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
